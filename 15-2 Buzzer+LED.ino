
#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262

int melody[] = {
  NOTE_C3, NOTE_C3, NOTE_G3, NOTE_G3,0, NOTE_A3, NOTE_A3, NOTE_G3,0,NOTE_F3,NOTE_F3,NOTE_E3,NOTE_E3,0,NOTE_D3,NOTE_D3,NOTE_C3};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8, 8, 8, 8,8, 8, 8, 4,8,8,8,8,8,8,8,8,4
};
int ledState=0;
void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop() {
  for (int thisNote = 0; thisNote < 17; thisNote++) {
    int noteDuration = 1600 / noteDurations[thisNote];
    tone(10, melody[thisNote], noteDuration);
    if(melody[thisNote]==NOTE_C3){
      digitalWrite(2,HIGH);
      ledState=2;
    }
    else if(melody[thisNote]==NOTE_D3){
      digitalWrite(3,HIGH);
      ledState=3;
    }
    else if(melody[thisNote]==NOTE_E3){
      digitalWrite(4,HIGH);
      ledState=4;
    }
    else if(melody[thisNote]==NOTE_F3){
      digitalWrite(5,HIGH);
      ledState=5;
    }
    else if(melody[thisNote]==NOTE_G3){
      digitalWrite(6,HIGH);
      ledState=6;
    }
    else if(melody[thisNote]==NOTE_A3){
      digitalWrite(7,HIGH);
      ledState=7;
    }
    else if(melody[thisNote]==NOTE_B3){
      digitalWrite(8,HIGH);
      ledState=8;
    }
    else if(melody[thisNote]==NOTE_C3){
      digitalWrite(9,HIGH);
      ledState=9;
    }

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    
    noTone(10);
    digitalWrite(ledState,LOW);
  }
  delay(200);
}

