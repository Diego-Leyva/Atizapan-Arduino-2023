#define VRX A1
#define VRY A2

int val_x, val_y;

void setup() {
	pinMode(VRX, INPUT);
	pinMode(VRY, INPUT);
	Serial.begin(9600);
}

void loop() {
	val_x = analogRead(VRX);
	val_y = analogRead(VRY);

	Serial.println("Coordenada X: " + String(val_x));
	Serial.println("Coordenada Y: " + String(val_y));

  delay(1000);
}