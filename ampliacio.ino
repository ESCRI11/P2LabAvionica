int blue = 5;
int red = 6;
int red_value = 0;
int blue_value = 0;
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
  blue_value = map(temp, 25, 23.5, 0, 255);
  red_value = map(temp, 25, 27, 0, 255);
  if (temp > 25) {analogWrite(red, red_value);}
  else if (temp < 25) {analogWrite(blue, blue_value);}
  Serial.println(temp);
}
