int pinanalog = 3;
double analog_data = 0;
double temp = 0;

void setup () {
  Serial.begin(9600);
}

void loop () {
  analog_data = analogRead(pinanalog);
  temp = (analog_data*0.013)+17.027;
  Serial.println(temp);
}
