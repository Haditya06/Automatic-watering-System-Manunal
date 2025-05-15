const int MOISTURE_SENSOR_PIN = 34;  
const int RELAY_PIN = 26;            
const int threshold = 3000;          

void setup() {
  Serial.begin(115200);             
  pinMode(RELAY_PIN, OUTPUT);      
  digitalWrite(RELAY_PIN, HIGH);
     
}

void loop() {
  int sensorValue = analogRead(MOISTURE_SENSOR_PIN);  
  Serial.print("Nilai kelembapan: ");
  Serial.println(sensorValue);     

  if (sensorValue >= threshold) {
    digitalWrite(RELAY_PIN, LOW);

  } else {

    digitalWrite(RELAY_PIN, HIGH);
  }
  
  delay(1000); 
}
