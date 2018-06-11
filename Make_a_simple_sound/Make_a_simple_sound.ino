/*
 피에조 스피커에 톤(고정 주파수) 소리 출력하기 
*/
int speakerPin = 2;  // 스피커에 연결된 핀을 2번으로 설정 
int button = 3;  // 버튼에 연결된 핀을 3번으로 설정
int buttonState = 0; // 버튼 핀의 상태를 저장하기 위함

void setup() { 
pinMode(speakerPin, OUTPUT);  // 스피커 핀을 출력으로 설정
pinMode(button, INPUT);  // 버튼 핀을 입력으로 설정  
} 
   
void loop() {
buttonState = digitalRead(button); // 버턴이 눌려졌는지를 읽음
  if(buttonState == HIGH) {  // 조건; 버턴의 상태가 High 이면
  tone(speakerPin, 2000, 1000); // 스피커에 2000hz의 음을 1초 동안 내기 
  delay(2000); 
 }
   else {    // 버튼의 상태가 High가 아니면 
   noTone(speakerPin); // 스피커 핀의 출력을 하지 않습니다. 
} 
}

