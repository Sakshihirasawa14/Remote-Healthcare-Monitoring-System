float temp;

void setup() {
Serial.begin(9600);  // put your setup code here, to run once:

}

void loop() {
  temp=analogRead(A1);
  temp=temp*0.48828125 + 9.5;
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print("*C");
  Serial.println();
  delay(1000);// put your main code here, to run repeatedly:

}
