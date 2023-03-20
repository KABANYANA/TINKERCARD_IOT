#define echopin 2
#define trigpin 3

long duration;
int distance;

void setup(){
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  Serial.begin(9600);
}
void loop(){
  //to clear trigpin condition
  
  digitalWrite(trigpin, LOW);
    delayMicroseconds(2);
    
  //set the trigpin to active
   digitalWrite(trigpin, HIGH);
    delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  
  //Return the sound wave travel
  duration = pulseIn(echopin, HIGH);
  
  //Distance calculation
  distance = duration * 0.034 /2;
  
  //displaying the distance
  Serial.print(" The Distance is: ");
  Serial.print(distance);
  Serial.print(" cm");
}
    