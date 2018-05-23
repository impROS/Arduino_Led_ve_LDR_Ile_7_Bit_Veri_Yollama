const int led1 = 7;
const int led2 = 8;
const int led3 = 9;
const int led4 = 10;
const int led5 = 11;
const int led6 = 12;
const int led7 = 13;

int bekleme_suresi = 1000;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);



  // for(int i =7;i<14;i++){
  //   digitalWrite(i, LOW);
  // }
}

void loop() {
  // for(int i =7;i<14;i++){
  //   digitalWrite(i, LOW);
  //  delay(500);
  //    digitalWrite(i,HIGH );
  //    delay(500);
  // }
  gonder(",munzur universitesi.,");
  
}
void gonder(String strVeri) {
  for (int i = 0; i < strVeri.length(); i++) {
    String strHarf = karakter_tablosu(String(strVeri.charAt(i)));
    veri_isle(strHarf);
    delay(bekleme_suresi);
    veri_isle("0000000");
    delay(bekleme_suresi);
  }

}
void veri_isle(String veri) {
  int ledIndex = 7;
  for (int i = 0; i < veri.length(); i++) {
    int durum = (String(veri.charAt(i))).toInt();
    led_isle(ledIndex++, durum);
  }

}

void led_isle(int led, int durum) {
  if (durum == 1) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
String karakter_tablosu(String strHarf) {
  //0000000
  if (strHarf.equals("a")) {
    return "1000000";
  } else if (strHarf.equals("b")) {
    return "0100000";
  } else if (strHarf.equals("c")) {
    return "1100000";
  } else if (strHarf.equals("d")) {
    return "0010000";
  } else if (strHarf.equals("e")) {
    return "1010000";
  } else if (strHarf.equals("f")) {
    return "1110000";
  } else if (strHarf.equals("g")) {
    return "0001000";
  } else if (strHarf.equals("h")) {
    return "1001000";
  } else if (strHarf.equals("ı")) {//xx
    return "0101000";
  }else if (strHarf.equals("i")) {
    return "1101000";
  }else if (strHarf.equals("j")) {
    return "0011000";
  }else if (strHarf.equals("k")) {
    return "1011000";
  }else if (strHarf.equals("xxxxx")) {
    return "0111000";
  }else if (strHarf.equals("m")) {
    return "1111000";
  }else if (strHarf.equals("n")) {
    return "0000100";
  }else if (strHarf.equals("o")) {
    return "1000100";
  }else if (strHarf.equals("ö")) {
    return "0100100";
  }else if (strHarf.equals("p")) {
    return "1100100";
  }else if (strHarf.equals("r")) {
    return "0010100";
  }else if (strHarf.equals("s")) {
    return "1010100";
  }else if (strHarf.equals("ş")) {
    return "0110100";
  }else if (strHarf.equals("t")) {
    return "1110100";
  }else if (strHarf.equals("u")) {
    return "0001100";
  }else if (strHarf.equals("ü")) {
    return "1001100";
  }else if (strHarf.equals("v")) {
    return "0101100";
  }else if (strHarf.equals("xxxx")) {
    return "1101100";
  }else if (strHarf.equals("z")) {
    return "0011100";
  }else if (strHarf.equals("1")) {
    return "1011100";
  }else if (strHarf.equals("2")) {
    return "0111100";
  }else if (strHarf.equals("3")) {
    return "1111100";
  }else if (strHarf.equals("l")) {
    return "0000010";
  }else if (strHarf.equals("y")) {
    return "1000010";
  }else if (strHarf.equals(" ")) {
    return "1100010";
  }else if (strHarf.equals(".")) {
    return "0010010";
  }else if (strHarf.equals(",")) {
    return "1010010";
  }else if (strHarf.equals("9")) {
    return "0110010";
  }else if (strHarf.equals("0")) {
    return "1110010";
  }
  return " ";
}
