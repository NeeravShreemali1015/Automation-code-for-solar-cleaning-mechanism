String readvoice;
int k=0;
void setup() {
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
while (Serial.available())
{
delay(3);
char c = Serial.read();
readvoice += c;
}

if(readvoice.length() > 0)
{
Serial.println(readvoice);

if(readvoice == "left")
{
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
}

if(readvoice == "right")
{
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);

}

if(readvoice == "stop")
{
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
}
}
readvoice="";
}
