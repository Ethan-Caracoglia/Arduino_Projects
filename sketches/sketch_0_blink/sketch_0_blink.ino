int led = 13;
const int UNIT_LENGTH = 200;
const int DOT_LENGTH = UNIT_LENGTH * 1;
const int LINE_LENGTH = UNIT_LENGTH * 3;
const int SAME_LETTER_SPACE = UNIT_LENGTH * 1;
const int LETTER_SPACE = UNIT_LENGTH * 3;
const int WORD_SPACE = UNIT_LENGTH * 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  morseWord("Hey Faggxt");
}

void loop() {
  // put your main code here, to run repeatedly:
}

void morseBlink(bool isLine){
  if (isLine) {
    digitalWrite(led, HIGH);
    delay(LINE_LENGTH);
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
    delay(DOT_LENGTH);
    digitalWrite(led, LOW);
  }
}

void morseLetter(char letter) {
  // Special case for the space character
  if (letter == ' ') {
    delay(WORD_SPACE);
    return;
  }
  
  // Not a letter clause
  if ((letter < 'A' || letter > 'z') || (letter > 'Z' && letter < 'a')) {
    // Blink real fast to let them know they messed up
    for (int i = 0; i < 4; i++) {
      digitalWrite(led, HIGH);
      delay(100);
      digitalWrite(led, LOW);
    }
    return;
  }

  // Adjust all lower case letters to upper case
  if (letter >= 'a' && letter <= 'z') {
    // Subtract the difference between 'a' and 'A' to get the correct offset from lower to upper
    letter -= 'a' - 'A';
  }
  
  switch (letter) {
    case 'A':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      break;
    case 'B':
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'C':
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'D':
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'E':
      morseBlink(false);
      break;
    case 'F':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'G':
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'H':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'I':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'J':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      break;
    case 'K':
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      break;
    case 'L':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'M':
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      break;
    case 'N':
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'O':
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      break;
    case 'P':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'Q':
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      break;
    case 'R':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'S':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
    case 'T':
      morseBlink(true);
      break;
    case 'U':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      break;
    case 'V':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      break;
    case 'W':
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      break;
    case 'X':
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      break;
    case 'Y': 
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      break;
    case 'Z':
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(true);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      delay(SAME_LETTER_SPACE);
      morseBlink(false);
      break;
  }
}

void morseWord(char* text) {
  int i = 0;
  while (text[i] != '\0') {
    morseLetter(text[i]);
    
    if (text[i + 1] == '\0') {
      // Add the in between each letter
      delay(WORD_SPACE);
    } else {
      delay(LETTER_SPACE);
    }
  }
}
