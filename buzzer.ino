//Plug buzzer into ground and a DIGITAL PIN. THIS IS FOR PASSIVE BUZZERS, CHECK BUZZER TYPE.
int buzzer_pin = 2;
int joystick_press_pin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer_pin, OUTPUT);
  pinMode(joystick_press_pin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int press_state = digitalRead(joystick_press_pin);
  if(press_state == LOW){
    tone(buzzer_pin, 1000, 20);
    Serial.println("Pressed!");
  }
}
