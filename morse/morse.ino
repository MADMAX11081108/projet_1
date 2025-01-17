
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println("ecrivez pour traduire vers le morse");
  #define court() { \
  digitalWrite(13, HIGH); \
  delay(200); \
  digitalWrite(13, LOW); \
  delay(200); \
  }
  #define long() { \
  digitalWrite(13,HIGH); \
  delay(800); \
  digitalWrite(13,LOW); \
  delay(200); \
  }

}

void loop() {
while (Serial.available()==0){\

}
delay(20);

String lettre[Serial.available()];

for(int i=1;i<Serial.available();i++){

  lettre[i]= (char) Serial.read();
Serial.print(lettre[i]);

  if (lettre[i]=="a"  || lettre[i] =="A"){
   court();
   long();
  }

  else if (lettre[i]=="b"  || lettre[i] =="B"){
   long();
   court();
   court();
   court();
  }
else if (lettre[i]=="c"  || lettre[i] =="C"){
   long();
   court();
   long();
   court();
  }
else if (lettre[i]=="d"  || lettre[i] =="D"){
   long();
   court();
   court();
  }
else if (lettre[i]=="e"  || lettre[i] =="E"){
   court();
  }
else if (lettre[i]=="f"  || lettre[i] =="F"){
   court();
   court();
   long();
   court();
  }
else if (lettre[i]=="g"  || lettre[i] =="G"){
   long();
   long();
   court();
  }
else if (lettre[i]=="h"  || lettre[i] =="H"){
   court();
   court();
   court();
   court();
  }
else if (lettre[i]=="i"  || lettre[i] =="I"){
   court();
   court();
  }
else if (lettre[i]=="j"  || lettre[i] =="J"){
   court();
   long();
  }
else if (lettre[i]=="k"  || lettre[i] =="K"){
   long();
   court();
   long();
  }
else if (lettre[i]=="l"  || lettre[i] =="L"){
   court();
   long();
   court();
   court();
  }
else if (lettre[i]=="m"  || lettre[i] =="M"){
   long();
   long();
  }
else if (lettre[i]=="n"  || lettre[i] =="N"){
   long();
   court();
  }
else if (lettre[i]=="o"  || lettre[i] =="O"){
   long();
   long();
   long();
  }
else if (lettre[i]=="p"  || lettre[i] =="P"){
   court();
   long();
   long();
   court();
  }
else if (lettre[i]=="q"  || lettre[i] =="Q"){
long();
long();
court();
long();
  }
else if (lettre[i]=="r"  || lettre[i] =="R"){
   court();
   long();
   court();
  }
else if (lettre[i]=="s"  || lettre[i] =="S"){
   court();
   court();
   court();
  }
else if (lettre[i]=="t"  || lettre[i] =="T"){
   long();
  }
else if (lettre[i]=="u"  || lettre[i] =="U"){
   court();
   court();
   long();
  }
else if (lettre[i]=="v"  || lettre[i] =="V"){
   court();
   court();
   court();
   long();
  }
else if (lettre[i]=="w"  || lettre[i] =="W"){
   court();
   long();
   long();
  }
else if (lettre[i]=="y"  || lettre[i] =="Y"){
   long();
   court();
   long();
   long();
  }
else if (lettre[i]=="z"  || lettre[i] =="Z"){
   long();
   long();
   court();
  }

else if (lettre[i]== "0"){
long();
long();
long();
long();
long();
}
else if (lettre[i]== "1"){
  court();
  long();
  long();
  long();
  long();

}
else if (lettre[i]== "2"){
  court();
  court();
  long();
  long();
  long();
}
else if (lettre[i]== "3"){
  court();
  court();
  court();
  long();
  long();

}
else if (lettre[i]== "4"){
  court();
  court();
  court();
  court();
  long();

}
else if (lettre[i]== "5"){
  court();
  court();
  court();
  court();
  court();


}
else if (lettre[i]== "6"){
  long();
  court();
  court();
  court();
  court();

}
else if (lettre[i]== "7"){
  long();
  long();
  court();
  court();
  court();

}
else if (lettre[i]== "8"){
  long();
  long();
  long();
  court();
  court();

}
else if (lettre[i]== "9"){
  long();
  long();
  long();
  long();
  court();

}
else if (lettre[i]== "."  || lettre[i]== ","){
delay(2000);
}
else if (lettre[i]== " "  || lettre[i]== ","){
delay(1000);
}
else {
  Serial.println("");
  Serial.println("A symbool was not recognised");
  Serial.println("");
}
if(lettre[i]=="."){
  Serial.println("");
}
delay (800);
}
}
