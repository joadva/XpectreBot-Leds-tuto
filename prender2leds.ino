// Encender y apagar un LED
const int LED=13;
void setup()
{
Serial.begin(9600);//iniciar puerto serie
pinMode(LED,OUTPUT);//definir pin como salida
}
void loop()
{
digitalWrite(LED,HIGH);// poner el Pin en HIGH
delay(1000);// Esperar 1 segundo
digitalWrite(LED,LOW);// poner el Pin en LOW
delay(1000); //esperar un segundo
}
