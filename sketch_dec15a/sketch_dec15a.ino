int LED1=5;
int LED2=6;
int LED3=7;
int LED4=8;
int LED5=9;
int LED6=10;
int LED7=11;
int LED8=12;
int LED9=13;
void setup() {
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}


void loop() {
 if (Serial.available())
{

  
int readveri= Serial.read();  

if ( readveri=='1')
{
digitalWrite(5,HIGH);

digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);


}



if ( readveri=='2')
{
digitalWrite(6,HIGH);

digitalWrite(5,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
}
if ( readveri=='3')
{
digitalWrite(7,HIGH);

digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
}
if ( readveri=='4')


{
digitalWrite(8,HIGH);

digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(5,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);

}
if ( readveri=='5')


{
digitalWrite(9,HIGH);

digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(5,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);

}
if ( readveri=='6')
{
digitalWrite(10,HIGH);

digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(5,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);

}
if ( readveri=='7')
{
digitalWrite(11,HIGH);

digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(5,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
}
if ( readveri=='8')
{
digitalWrite(12,HIGH);

digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(5,LOW);
digitalWrite(13,LOW);

}
if ( readveri=='9')
{
digitalWrite(13,HIGH);

digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(5,LOW);
}
}
}
