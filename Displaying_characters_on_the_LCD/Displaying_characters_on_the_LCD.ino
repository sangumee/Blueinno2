/* LCD 에  문자 표시하기
*/ 
#include <LiquidCrystal.h> ; // LCD 라이브러리를 사용하기 위한 헤더 파일을 추가 
LiquidCrystal lcd(1, 2, 3, 4, 5, 6);  // LCD와 보드의 핀 번호를 적어 줍니다. 
                                           // LCD (RS, Enable, Data Bit 4, 5, 6, 7 )  
void setup()
{
}
void loop()
{
  lcd.setCursor(0,1);   // LCD에 Display할 좌표를 정해 줍니다. 
lcd.begin(16, 2);    // LCD 데이터를 2행 16열로 표시합니다. 
lcd.clear();   // LCD 화면을 지웁니다. 
lcd.print("142.310.402.192");  // LCD 화면에 “ Hello Blueinno!”를 표시합니다. 
  delay(100000); //1초간 유지
lcd.clear();   // LCD 화면을 지웁니다. 
delay(1000); // 1초간 유지
}


