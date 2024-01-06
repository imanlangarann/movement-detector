#define in_sig 2

unsigned long detect_start = 0;
bool state = 0;

void setup() {
  pinMode(in_sig, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // if(digitalRead(in_sig) != state){
    state = digitalRead(in_sig);
    digitalWrite(LED_BUILTIN, state);
  //   Serial.println(state);
  // }

  // delay(100);
}
