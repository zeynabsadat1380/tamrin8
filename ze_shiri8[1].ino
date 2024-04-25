#include <LiquidCrystal.h>//include the library code
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
   Serial.begin(9600);//setup serial
  lcd.begin(16, 2);//lcd sise
}

void loop() {
  float voltage = analogRead(A2);//read the input voltage(analog pin A2)
  float Temp = voltage * 0.48828125;//computing Temp
  Serial.print("Temp : ");//show Temp
  Serial.print(Temp);//show Temp
  Serial.println("*C");//show Temp
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");//show Temp
  lcd.print(Temp);//show Temp
  lcd.print(" *C");//show Temp
  delay(2000);//waits for 2 seconds
  lcd.clear();//clear the lcd screan

}
