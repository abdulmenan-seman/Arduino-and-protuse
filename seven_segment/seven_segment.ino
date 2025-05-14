int a=1;
int b=2;
int c=3;
int d=4;
int e=5;
int f=6;
int g=7;

void setup()
{
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (a,1);
digitalWrite (b,1);
digitalWrite (c,1);
digitalWrite (d,1);
digitalWrite (e,1);
digitalWrite (f,1);
digitalWrite (g,0);
delay (200);

digitalWrite (a,0);
digitalWrite (b,1);
digitalWrite (c,1);
digitalWrite (d,0);
digitalWrite (e,0);
digitalWrite (f,0);
digitalWrite (g,0);
delay (200);

digitalWrite (a,1);
digitalWrite (b,1);
digitalWrite (c,0);
digitalWrite (d,1);
digitalWrite (e,1);
digitalWrite (f,0);
digitalWrite (g,1);
delay (200);

digitalWrite (a,1);
digitalWrite (b,1);
digitalWrite (c,1);
digitalWrite (d,1);
digitalWrite (e,0);
digitalWrite (f,0);
digitalWrite (g,1);
delay (200);

digitalWrite (a,0);
digitalWrite (b,1);
digitalWrite (c,1);
digitalWrite (d,0);
digitalWrite (e,0);
digitalWrite (f,1);
digitalWrite (g,1);
delay (200);


digitalWrite (a,1);
digitalWrite (b,0);
digitalWrite (c,1);
digitalWrite (d,1);
digitalWrite (e,0);
digitalWrite (f,1);
digitalWrite (g,1);
delay (200);

digitalWrite (a,1);
digitalWrite (b,0);
digitalWrite (c,1);
digitalWrite (d,1);
digitalWrite (e,1);
digitalWrite (f,1);
digitalWrite (g,1);
delay (200);

digitalWrite (a,1);
digitalWrite (b,1);
digitalWrite (c,1);
digitalWrite (d,0);
digitalWrite (e,0);
digitalWrite (f,0);
digitalWrite (g,0);
delay (200);

digitalWrite (a,1);
digitalWrite (b,1);
digitalWrite (c,1);
digitalWrite (d,1);
digitalWrite (e,1);
digitalWrite (f,1);
digitalWrite (g,1);
delay (200);


digitalWrite (a,1);
digitalWrite (b,1);
digitalWrite (c,1);
digitalWrite (d,1);
digitalWrite (e,0);
digitalWrite (f,1);
digitalWrite (g,1);
delay (200);
}

