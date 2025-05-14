float sinVal;
int toneVal;
unsigned long tepTimer;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  double data;
  val=analogRead(A0);
  data=(double)val * (5/10.24);
  if(data > 27){
    for (int x =0; x<180; x++){
      sinVal = sin(x * (3.1412/180));
      toneVal = 2000 + (int)(sinVal * 1000);
      tone(8,toneVal);
      delay(4);
    }
  }else {
    noTone(8);
  
  }
  if (millis() - tepTimer>500){
    tepTimer = millis();
    Serial.print("temprature");
    Serial.print(data);
    Serial.print("C");
  }


}
