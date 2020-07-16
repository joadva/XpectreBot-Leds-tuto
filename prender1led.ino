// Encender y apagar un LED
const int LED1=13;
const int LED2=12;
void setup()
{
Serial.begin(9600);//iniciar puerto serie
pinMode(LED1,OUTPUT);//definir pin como salida
pinMode(LED2,OUTPUT);//definir pin como salida
}
void loop()
{
digitalWrite(LED1,HIGH);// poner el led1 en HIGH
delay(1000);// Esperar 1 segundo
digitalWrite(LED1,LOW);// poner el led 1en LOW
delay(1000); //esperar un segundo
digitalWrite(LED2,HIGH);// poner el led2 en HIGH
delay(1000);// Esperar 1 segundo
digitalWrite(LED2,LOW);// poner el led2 en LOW
delay(1000); //esperar un segundo
}
