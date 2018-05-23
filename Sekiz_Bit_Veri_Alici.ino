const int ldr1 = A0;
const int ldr2 = A2;
const int ldr3 = A3;
const int ldr4 = A4;
const int ldr5 = A5;
const int ldr6 = A6;
const int ldr7 = A7;


const int led = 9;

int deger1, deger2, deger3, deger4, deger5, deger6, deger7;
int esik_degeri = 150;
String veri = "";

void setup() {
  //pinMode(A1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  deger1 = analogRead(ldr1);
  deger2 = analogRead(ldr2);
  deger3 = analogRead(ldr3);
  deger4 = analogRead(ldr4);
  deger5 = analogRead(ldr5);
  deger6 = analogRead(ldr6);
  deger7 = analogRead(ldr7);


  veri_isle(deger1);
  veri_isle(deger2);
  veri_isle(deger3);
  veri_isle(deger4);
  veri_isle(deger5);
  veri_isle(deger6);
  veri_isle(deger7);


  //  yaz("deger1");
  //  yaz(deger1);
  //  yaz("deger2");
  //  yaz(deger2);
  //  yaz("deger3");
  //  yaz(deger3);
  //  yaz("deger4");
  //  yaz(deger4);
  //  yaz("deger5");
  //  yaz(deger5);
  //  yaz("deger6");
  //  yaz(deger6);
  //  yaz("deger7");
  //  yaz(deger7);
  if (!veri.equals("0000000")) {
    if (!veri.equals("0000001")) {
      yaz(veri);
    }


  }
  veri = "";
  delay(1000);
}
void veri_isle(int deger) {
  if (deger > esik_degeri) {
    veri += "1";
  } else {
    veri += "0";
  }
}
void yaz(String deger) {
  //Serial.print(deger + " = ");
  Serial.print(karakter_tablosu(deger));
}
void yaz(int deger) {
  Serial.print(deger);
}
String karakter_tablosu(String strHarf) {
  if (strHarf.equals("1000000")) {
    return "a";
  } else if (strHarf.equals("0100000")) {
    return "b";
  } else if (strHarf.equals("1100000")) {
    return "c";
  } else if (strHarf.equals("0010000")) {
    return "d";
  } else if (strHarf.equals("1010000")) {
    return "e";
  } else if (strHarf.equals("1110000")) {
    return "f";
  } else if (strHarf.equals("0001000")) {
    return "g";
  } else if (strHarf.equals("1001000")) {
    return "h";
  } else if (strHarf.equals("0111000")) {
    //Serial.println(" geldi");
    return "ı";
  } else if (strHarf.equals("1101000")) {
    return "i";
  } else if (strHarf.equals("0011000")) {
    return "j";
  } else if (strHarf.equals("1011000")) {
    return "k";
  }else if (strHarf.equals("0111000")) {
    return "";
  }else if (strHarf.equals("1111000")) {
    return "m";
  }else if (strHarf.equals("0000100")) {
    return "n";
  }else if (strHarf.equals("1000100")) {
    return "o";
  }else if (strHarf.equals("0100100")) {
    return "ö";
  }else if (strHarf.equals("1100100")) {
    return "p";
  }else if (strHarf.equals("0010100")) {
    return "r";
  } else if (strHarf.equals("1010100")) {
    return "s";
  }else if (strHarf.equals("0110100")) {
    return "ş";
  }else if (strHarf.equals("1110100")) {
    return "t";
  }else if (strHarf.equals("0001100")) {
    return "u";
  } else if (strHarf.equals("1001100")) {
    return "ü";
  }else if (strHarf.equals("0101100")) {
    return "v";
  }else if (strHarf.equals("1101100")) {
    return "";
  }else if (strHarf.equals("0011100")) {
    return "z";
  }else if (strHarf.equals("1011100")) {
    return "1";
  }else if (strHarf.equals("0111100")) {
    return "2";
  }else if (strHarf.equals("1111100")) {
    return "3";
  }else if (strHarf.equals("0000010")) {
    return "l";
  }else if (strHarf.equals("1000010")) {
    return "y";
  }else if (strHarf.equals("1100010")) {
    return " ";
  }else if (strHarf.equals("0010010")) {
    return ".";
  }else if (strHarf.equals("1010010")) {
    Serial.println(" ");
    return "";
  }else if (strHarf.equals("0110010")) {
    return "9";
  }else if (strHarf.equals("1110010")) {
    return "0";
  }else {
    return "null";
  }
}
