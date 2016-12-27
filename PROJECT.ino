#define DEBUG
int count=0;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(250000);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  read the input on analog pin 0:
  int sensorValueA = digitalRead(A0);
  int sensorValueB = digitalRead(A1);
#ifdef DEBUG
  Serial.println(sensorValueA);
  Serial.println(sensorValueB);
#endif
  delay(1); 
	if (sensorValueA==HIGH){
		delay(10);
		if (sensorValueB==HIGH){
			count ++;
		}
	}
  if(sensorValueB==HIGH){
	  delay(10);
	if(sensorValueA==HIGH){
	count--;
	}
  }

delay (30);

}
