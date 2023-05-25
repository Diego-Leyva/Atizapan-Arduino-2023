#include <RH_ASK.h>
#include <SPI.h> 

const byte tamMsg = 10;

RH_ASK askRx;
 
void setup()
{
    Serial.begin(9600);
    askRx.init();
}
 
void loop()
{
    uint8_t msg[tamMsg];
    uint8_t msgLen = sizeof(msg);

    if (askRx.recv(msg, &msgLen))
    {
      Serial.print("Mensaje recibido: ");
      Serial.println((char*)msg);         
    }
}
