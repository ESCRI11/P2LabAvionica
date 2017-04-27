int led = 13;
double analog_data = 0;
double temp = 0;
double control_led;

void setup () {
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop () {
  analog_data = analogRead(3);
  temp = (analog_data*0.013)+17.027;
  delay(500);
  if (temp > 27) {digitalWrite(led, 1);}
  else if (temp < 23.5) {digitalWrite(led, 1);}
  else {digitalWrite(led, 0);}

  Serial.println(temp);
}
