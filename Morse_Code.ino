int led = 13;
char input;
int timeunit = 200;

void setup () {
  pinMode (led, OUTPUT);
  Serial.begin(9600);
}

void loop () {
  if (Serial.available()) {
    
    input = Serial.read();
    
    if (input == 'a' || input == 'A') {
      SendA();
    }
    else if (input == 'b' || input == 'B') {
      SendB();
    }
    else if (input == 'c' || input == 'C') {
      SendC();
    }
    else if (input == 'd' || input == 'D') {
      SendD();
    }
    else if (input == 'e' || input == 'E') {
      SendE();
    }
    else if (input == 'f' || input == 'F') {
      SendF();
    }
    else if (input == 'g' || input == 'G') {
      SendG();
    }
    else if (input == 'h' || input == 'H') {
      SendH();
    }
    else if (input == 'i' || input == 'I') {
      SendI();
    }
    else if (input == 'j' || input == 'J') {
      SendJ();
    }
    else if (input == 'k' || input == 'K') {
      SendK();
    }
    else if (input == 'l' || input == 'L') {
      SendL();
    }
    else if (input == 'm' || input == 'M') {
      SendM();
    }
    else if (input == 'n' || input == 'N') {
      SendN();
    }
    else if (input == 'o' || input == 'O') {
      SendO();
    }
    else if (input == 'p' || input == 'P') {
      SendP();
    }
    else if (input == 'q' || input == 'Q') {
      SendQ();
    }
    else if (input == 'r' || input == 'R') {
      SendR();
    }
    else if (input == 's' || input == 'S') {
      SendS();
    }
    else if (input == 't' || input == 'T') {
      SendT();
    }
    else if (input == 'u' || input == 'U') {
      SendU();
    }
    else if (input == 'v' || input == 'V') {
      SendV();
    }
    else if (input == 'w' || input == 'W') {
      SendW();
    }
    else if (input == 'x' || input == 'X') {
      SendX();
    }
    else if (input == 'y' || input == 'Y') {
      SendY();
    }
    else if (input == 'z' || input == 'Z') {
      SendZ();
    }
    else if (input == '0') {
      Send0();
    }
    else if (input == '1') {
      Send1();
    }
    else if (input == '2') {
      Send2();
    }
    else if (input == '3') {
      Send3();
    }
    else if (input == '4') {
      Send4();
    }
    else if (input == '5') {
      Send5();
    }
    else if (input == '6') {
      Send6();
    }
    else if (input == '7') {
      Send7();
    }
    else if (input == '8') {
      Send8();
    }
    else if (input == '9') {
      Send9();
    }
    else if (input == ' ') {
      mediumSpace();
    }
    Serial.println (input);
  }
}

void SendA () {
  dot();
  dash();
  shortSpace();
}

void SendB (){
  dash();
  dot();
  dot();
  dot(); 
  shortSpace();
}

void SendC () {
  dash();
  dot();
  dash();
  dot();
  shortSpace();
}

void SendD () {
  dash();
  dot();
  dot();
  shortSpace();
}

void SendE () {
  dot();
  shortSpace();
}

void SendF () {
  dot();
  dot();
  dash();
  dot();
  shortSpace();
}

void SendG () {
  dash();
  dash();
  dot();
  shortSpace();
}

void SendH () {
  dot();
  dot();
  dot();
  dot();
  shortSpace();
}

void SendI () {
  dot();
  dot();
  shortSpace();
}

void SendJ () {
  dot();
  dash();
  dash();
  dash();
  shortSpace();
}

void SendK () {
  dash();
  dot();
  dash();
  shortSpace();
}

void SendL () {
  dot();
  dash();
  dot();
  dot();
  shortSpace();
}

void SendM () {
  dash();
  dash();
  shortSpace();
}

void SendN () {
  dash();
  dot();
  shortSpace();
}

void SendO () {
  dash();
  dash();
  dash();
  shortSpace();
}

void SendP () {
  dot();
  dash();
  dash();
  dot();
  shortSpace();
}

void SendQ () {
  dash();
  dash();
  dot();
  dash();
  shortSpace();
}

void SendR () {
  dot();
  dash();
  dot();
  shortSpace();
}

void SendS () {
  dot();
  dot();
  dot();
  shortSpace();
}

void SendT () {
  dash();
  shortSpace();
}

void SendU () {
  dot();
  dot();
  dash();
  shortSpace();
}

void SendV () {
  dot();
  dot();
  dot();
  dash();
  shortSpace();
}

void SendW () {
  dot();
  dash();
  dash();
  shortSpace();
}

void SendX () {
  dash();
  dot();
  dot();
  dash();
  shortSpace();
}

void SendY () {
  dash();
  dot();
  dash();
  dash();
  shortSpace();
}

void SendZ () {
  dash();
  dash();
  dot();
  dot();
  shortSpace();
}

void Send0 () {
  dash();
  dash();
  dash();
  dash();
  dash();
  shortSpace();
}

void Send1 () {
  dot();
  dash();
  dash();
  dash();
  dash();
  shortSpace();
}

void Send2 () {
  dot();
  dot();
  dash();
  dash();
  dash();
  shortSpace();
}

void Send3 () {
  dot();
  dot();
  dot();
  dash();
  dash();
  shortSpace();
}

void Send4 () {
  dot();
  dot();
  dot();
  dot();
  dash();
  shortSpace();
}

void Send5 () {
  dot();
  dot();
  dot();
  dot();
  dot();
  shortSpace();
}

void Send6 () {
  dash();
  dot();
  dot();
  dot();
  dot();
  shortSpace();
}

void Send7 () {
  dash();
  dash();
  dot();
  dot();
  dot();
  shortSpace();
}

void Send8 () {
  dash();
  dash();
  dash();
  dot();
  dot();
  shortSpace();
}

void Send9 () {
  dash();
  dash();
  dash();
  dash();
  dot();
  shortSpace();
}

void dot () {
  digitalWrite(led, HIGH);
  delay (timeunit);
  digitalWrite(led, LOW);
  delay (timeunit);
}

void dash () {
  digitalWrite(led, HIGH);
  delay (timeunit * 3);
  digitalWrite(led, LOW);
  delay (timeunit);
}

void shortSpace () {
  delay(timeunit * 3);
}

void mediumSpace () {
  delay (timeunit * 7);
}

