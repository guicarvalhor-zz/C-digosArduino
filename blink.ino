*
  Blink
*/


// a função de configuração é executada uma vez quando você pressiona reset ou liga a placa
void setup() {
  // initializando o pino digital LED_BUILTIN como uma saída.
  pinMode(LED_BUILTIN, OUTPUT);
}

// a função de loop é executada repetidamente para sempre
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(1000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);                       
}