int count = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Connecting");
  
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Waiting Response: ");
  while(!Serial.available());
  
  String temp = Serial.readString();
  Serial.print(temp);
  
  Serial.println(count);
  delay(1000);
  count += 1;

}
