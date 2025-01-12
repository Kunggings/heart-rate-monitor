void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);
  
  // Set pin 10 as an INPUT for leads off detection (LO +)
  pinMode(10, INPUT);
  
  // Set pin 11 as an INPUT for leads off detection (LO -)
  pinMode(11, INPUT);
}
 
void loop() {
  // Check if either pin 10 or pin 11 is HIGH (indicating leads off detection)
  if((digitalRead(10) == 1)||(digitalRead(11) == 1)){
    // If leads off are detected, print an exclamation mark '!' to the serial monitor
    Serial.println('!');
  }
  else{
    // Otherwise, read the analog value from pin A0 and print it to the serial monitor
    Serial.println(analogRead(A0));
  }
  
  // Wait for a short period (10 milliseconds) to prevent serial data from saturating
  delay(10);
}
