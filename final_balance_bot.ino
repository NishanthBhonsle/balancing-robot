#include<Servo.h>
#include<PID_v1.h>

int trigPin = 10;    //Trig - green Jumper
int echoPin = 11;    //Echo - yellow Jumper
long duration, cm, inches;
 


const int servoPin = 9;                                           
 
float Kp = 2.5;                                                
float Ki = 0;                                                 
float Kd = 1.1;                                              
double Setpoint, Input, Output, ServoOutput;                                       



PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);        
                                                                      
                                                                     
                                                                     
                                                                     
Servo myServo;                                                      


void setup() {

  Serial.begin(9600);                                              
  myServo.attach(servoPin);                                        

  Input = readPosition();  
                                                 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);                                                          
  
 
  myPID.SetMode(AUTOMATIC);                                        
  myPID.SetOutputLimits(-80,80); 
}

void loop()
{
 
  Setpoint = 15;
  Input = readPosition();                                            
 
  myPID.Compute();                                                   
  
  ServoOutput=102+Output;                                          
  myServo.write(ServoOutput);                        
  
  
}
      
      
      

float readPosition() {
  delay(40);                             

  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
 
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
 
  cm = (duration/2) / 29.1;
  inches = (duration/2) / 74; 
  
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
 return cm;                                      
}
