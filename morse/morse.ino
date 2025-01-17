
void setup() {
  Serial.begin(9600);
  Serial.println("ecrivez pour traduire vers le morse");
}

void loop() {
while (Serial.available()==0){

}
delay(20);
int nbrcara = Serial.available();
String lettre[nbrcara];
for(int i= 0;i<nbrcara;i++){
  lettre[i]=Serial.read();
}
for(int j= 0;j<nbrcara;j++){
  Serial.print(lettre[j]);
}

while (Serial.available()==nbrcara){

}
}
