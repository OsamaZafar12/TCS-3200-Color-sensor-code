
//HIGHLY CONFIDENTIAL DOCUMENT 
//Developed by Osama Zafar xD xD
//First of all,I introduced the pins of the sensor to the Arduino pin

const int s0=A3;
const int s1=A4;
const int s2=A1;
const int s3=A2;
const int sensorData=A0;  //output of the sensor data is placed in Analogue A0 pin

//Now i introduced some global variables,so i can use them as the incremental form in the code

int dataR=0;
int dataB=0;
int dataG=0;

void setup() 
{
   pinMode(s0,OUTPUT);
   pinMode(s1,OUTPUT);
   pinMode(s2,OUTPUT);
   pinMode(s3,OUTPUT);
   pinMode(sensorData,INPUT); //It is taken input because the sensor sense it from here
   Serial.begin(9600);
   
//I placed s0 and s1 both HIGH logic because i am using 100%Frequecy,We can use any other frequency according to our need
   digitalWrite(s0,HIGH);
   digitalWrite(s1,HIGH);
   
}

void loop()
{
   //For Red s2 and s3 are both LOW
   digitalWrite(s2,LOW);
   digitalWrite(s3,LOW);
   dataR=pulseIn(sensorData,LOW); //PulseIn takes 2 arguments one from the sensor data and other from LOW form
   delay(20);

   
//For Green s2=HIGH and s3=LOW 
   digitalWrite(s2,HIGH);
   digitalWrite(s3,HIGH);
   dataG=pulseIn(sensorData,LOW);
   delay(20);

//For Blue s2=LOW and s3=LOW 
   digitalWrite(s2,LOW);
   digitalWrite(s3,HIGH);
   dataB=pulseIn(sensorData,LOW);
   delay(20);

   //Now all individual fucntions made in the separat tabs are called in the loop fuction
   
   if(Red())
   {
    Serial.println("this is the RED color"); 
   
   }
   if(Blue())
   {
    Serial.println("this is the Blue color");
  
   }
   if(Green())
   {
    Serial.println("this is the GREEN color");
 
   }
 
   if(White())
   {
     Serial.println("this is the White color");
    }
     if(Black())
   {
     Serial.println("this is the Black color");
    }
}



