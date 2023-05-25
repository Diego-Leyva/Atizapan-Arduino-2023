#define VRX A1 
#define VRY A2

#include <RH_ASK.h>
#include <SPI.h> 
 
RH_ASK askTx;

int XVAL, YVAL;
 
void setup()
{
  askTx.init();

  pinMode(VRX, INPUT);
  pinMode(VRY, INPUT);
}
 
void loop()
{
  XVAL = analogRead(VRX);
  YVAL = analogRead(VRY);

  const char *msg = XVAL + " " + YVAL;

  askTx.send((uint8_t *)msg, strlen(msg));
  askTx.waitPacketSent();
}
