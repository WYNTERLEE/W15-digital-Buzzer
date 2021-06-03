
#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262

int melody[] = {
  NOTE_C3, NOTE_C3, NOTE_G3, NOTE_G3,0, NOTE_A3, NOTE_A3, NOTE_G3,0, NOTE_F3, NOTE_F3, NOTE_E3, NOTE_E3,0, NOTE_D3, NOTE_D3, NOTE_C3,0,
  NOTE_G3, NOTE_G3, NOTE_F3, NOTE_F3,0, NOTE_E3, NOTE_E3, NOTE_D3,0, NOTE_G3, NOTE_G3, NOTE_F3, NOTE_F3,0, NOTE_E3, NOTE_E3, NOTE_D3,0,
  NOTE_C3, NOTE_C3, NOTE_G3, NOTE_G3,0, NOTE_A3, NOTE_A3, NOTE_G3,0, NOTE_F3, NOTE_F3, NOTE_E3, NOTE_E3,0, NOTE_D3, NOTE_D3, NOTE_C3,0,	

};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4,4,
};

void setup(){
 
}
void loop() {
  for (int thisNote = 0; thisNote < 54; thisNote++) {
    int noteDuration = 1600 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    
    noTone(8);
    
  }
  delay(200);
}
