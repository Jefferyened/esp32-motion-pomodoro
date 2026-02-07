const int START_PIN = 15; // green button
const int STOP_PIN = 4; // red button


int lastStartState = 1; //previous reading for start button
int lastStopState = 1; //previous reading for stop button

void setup() {
  Serial.begin(115200); //serial com

  pinMode(START_PIN, INPUT_PULLUP); // when start button is pressed triggers "LOW =0" when released triggers "HIGH=1"
  pinMode(STOP_PIN, INPUT_PULLUP); //when stop button is pressed triggers "LOW=0" when released triggers "HIGH=1"

}

void loop() {
  int currentStartState = digitalRead(START_PIN);
  int currentStopState = digitalRead(STOP_PIN);

  if(lastStartState == 1 && currentStartState ==0){ //check if it was released ("1") and NOW its pressed ("0")
    Serial.println("START button PRESSED");
  }

  if(lastStopState == 1 && currentStopState ==0){ //check if it was released ("1") and NOW its pressed ("0")
    Serial.println("STOP button PRESSED");
  }

  lastStartState = currentStartState; //remember state
  lastStopState = currentStopState;

  delay(20);
}
