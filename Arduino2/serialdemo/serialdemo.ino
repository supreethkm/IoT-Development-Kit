void setup()

{

pinMode(13, OUTPUT);

Serial.begin(9600);

while (!Serial);

Serial.println("Input 1 to Turn LED on and 2 to off");

}

void loop() {

if (Serial.available())

{
String led  = Serial.readString();
int state = Serial.parseInt();

if (state == 1 | led == "ON")

{

digitalWrite(13, HIGH);

Serial.println("Command completed LED turned ON");

}

if (state == 2 | led == "OFF")

{

digitalWrite(13, LOW);

Serial.println("Command completed LED turned OFF");

}

}

}
