int BAUD_RATE = 9600;
int led = 13;
char incomingByte = ' ';

void setup(void)
{
    Serial.begin(BAUD_RATE);
    pinMode(led, OUTPUT);
}

void loop(void)
{
    if(Serial.available() > 0){
        incomingByte = Serial.read();

        //Serial.println(incomingByte);

        if(incomingByte == '1'){
            digitalWrite(led, HIGH);
            //Serial.println("Led is ON");
        }
        else if(incomingByte == '0'){
            digitalWrite(led, LOW);
            //Serial.println("Led is OFF");
        }
    }
}