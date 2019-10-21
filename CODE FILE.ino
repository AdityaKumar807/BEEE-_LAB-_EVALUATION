#define relay 10
int pushbutton = 7;
int LDR = A0;
int val=0;

void setup() 
{
Serial.begin(9600);
pinMode(pushbutton, INPUT);
pinMode(relay, OUTPUT);
pinMode(LDR, INPUT);
}

void loop() 

{
 val = digitalRead(pushbutton);
 if (val == HIGH) {
int LDRValue = analogRead(LDR);
Serial.print("sensor = ");
Serial.print(LDRValue);

if (LDRValue <=700) 
{
Serial.println("It's Dark Outside; Lights status: ON");
}
else 
{
Serial.println("It's Bright Outside; Lights status: OFF");
}
}
}