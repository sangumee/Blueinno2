/*  버튼을 누르는 동안 LED켜기  */
int button = 2;  // 버튼 핀을 2번으로 설정
int LED = 3;      // LED핀을 3번으로 설정
int buttonState = 0; // 입력 핀의 상태를 읽기 위한 변수

void setup() {
pinMode(LED , OUTPUT);  // LED핀을 출력으로 설정
pinMode(button, INPUT);  
}
void loop() {
  buttonState = digitalRead(button);
  // 디지털입력 핀인  버튼이 눌려졌는지를 읽음
  
  if(buttonState  == HIGH) {  // 버턴의 상태가 High 이면
      digitalWrite(LED , HIGH);   // LED 핀을 High로 출력
   }
   else {    // 버턴의 상태가 High가 아니면 
      digitalWrite(LED , LOW);  // LED 핀을 Low로 출력   
}
 }

