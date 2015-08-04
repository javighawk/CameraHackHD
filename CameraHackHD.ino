int buttonPin = 51;
char s;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  
    if( Serial.available() > 0 ){
        s = Serial.read();
        
        switch(s){
            case 's':
                Serial.println("Setup...");
                pushButton(3000);
                Serial.println("Setup finished!");
                break;
            
            case 't':
                Serial.println("Take picture");
                pushButton(500);
                break;
        }
    }
}

void pushButton( int time ){
    pinMode(buttonPin, OUTPUT);
    delay( time );
    pinMode(buttonPin, INPUT);
}
