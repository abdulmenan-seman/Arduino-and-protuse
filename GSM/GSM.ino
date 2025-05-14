#include <SoftwareSerial.h>

// Initialize SoftwareSerial for GSM module communication
SoftwareSerial mySerial(9, 10); // RX=9, TX=10

String userInput = ""; // To store user input

void setup() {
  mySerial.begin(9600); // GSM module baud rate
  Serial.begin(9600);   // Serial Monitor baud rate
  delay(100);
  Serial.println("GSM Module Initialized");
  Serial.println("Commands:");
  Serial.println("Type 's' to send a message");
  Serial.println("Type 'r' to configure receiving messages");
}

void loop() {
  // Check for input from the Serial Monitor
  if (Serial.available() > 0) {
    char c = Serial.read(); // Read a character
    Serial.print(c);        // Echo back the character to the terminal
    if (c == '\n' || c == '\r') { // If the user presses Enter
      processCommand(userInput); // Process the input command
      userInput = "";            // Clear the input buffer
    } else {
      userInput += c; // Append the character to the input buffer
    }
  }

  // Check for input from the GSM module
  if (mySerial.available() > 0) {
    char gsmChar = mySerial.read();
    Serial.write(gsmChar); // Forward GSM module responses to Serial Monitor
  }
}

void processCommand(String command) {
  command.trim(); // Remove any leading or trailing whitespace

  if (command == "s") {
    sendMessage();
  } else if (command == "r") {
    receiveMessage();
  } else {
    Serial.println("Invalid command! Type 's' to send a message or 'r' to receive messages.");
  }
}

void sendMessage() {
  String phoneNumber = "";
  String messageText = "";

  // Prompt for phone number
  Serial.println("\nEnter recipient's phone number (include country code, e.g., +1251234567): ");
  while (phoneNumber == "") {
    if (Serial.available() > 0) {
      phoneNumber = Serial.readString();
      phoneNumber.trim();
      Serial.println(phoneNumber);
    }
  }

  // Prompt for message text
  Serial.println("Enter the message text to send: ");
  while (messageText == "") {
    if (Serial.available() > 0) {
      messageText = Serial.readString();
      messageText.trim();
      Serial.println(messageText);
    }
  }

  // Send the SMS using the GSM module
  mySerial.println("AT+CMGF=1"); // Set GSM module to Text Mode
  delay(1000);
  mySerial.print("AT+CMGS=\"");
  mySerial.print(phoneNumber);
  mySerial.println("\""); // Specify the recipient's phone number
  delay(1000);
  mySerial.println(messageText); // Send the message text
  delay(100);
  mySerial.println((char)26); // ASCII code for CTRL+Z to end the message
  delay(1000);

  // Confirmation
  Serial.println("Message sent to " + phoneNumber);
}

void receiveMessage() {
  mySerial.println("AT+CNMI=2,2,0,0,0"); // Configure the GSM module to receive SMS
  delay(1000);
  Serial.println("Configured to receive messages. SMS will appear in the terminal.");
}
