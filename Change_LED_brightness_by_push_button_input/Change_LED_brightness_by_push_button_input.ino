/*  푸시 버튼에 의한 LED 밝기 바꾸기
  */
int button = 2;  // 버튼이 연결된 핀을 2번으로 설정
int R_LED = 4;   // Red LED가 연결된 핀을 4번으로 설정 
int G_LED = 5;   // Green LED가 연결된 핀을 5번으로 설정
int B_LED = 6;   // Blue LED가 연결된 핀을 6번으로 설정 
int buttonState = 0; // 버튼 입력의 상태를 저장하기 위함

void setup() {
pinMode(R_LED , OUTPUT);  // Red LED 핀을 출력으로 설정 
 pinMode(G_LED , OUTPUT);  // Green LED 핀을 출력으로 설정 
 pinMode(B_LED , OUTPUT);  // Blue LED 핀을 출력으로 설정 
pinMode(button, INPUT); // button 핀을 입력으로 설정
}


void loop() {
  buttonState = digitalRead(button);  // 디지털 입력 핀인 버튼이 눌려졌는지를 읽음

  if(buttonState  == HIGH) {   // 버튼이 High 이면  { } 를 실행합니다. 
    
        analogWrite(R_LED, 255);  // Red LED의 밝기를 최대로 합니다. 
       delay(500);   // 500ms 동안 대기합니다. 

        analogWrite(R_LED, 123);   // Red LED의 밝기를 중간으로 합니다. 
        delay(500); // 500ms 동안 대기합니다. 

        analogWrite(R_LED, 0);     // Red LED의 밝기를 최소로 합니다. 
        delay(500); // 500ms 동안 대기합니다.         

       
       
        analogWrite(G_LED, 255);     // Green LED의 밝기를 최대로 합니다. 
         delay(500);   // 500ms 동안 대기합니다. 

        analogWrite(G_LED, 123);     // Green LED의 밝기를 중간으로 합니다. 
        delay(500); // 500ms 동안 대기합니다. 

         analogWrite(G_LED, 0);    // Green LED의 밝기를 최소로 합니다. 
         delay(500); // 500ms 동안 대기합니다.         
       
          analogWrite(B_LED, 255);     // Blue LED의 밝기를 최대로 합니다.     
           delay(500);   // 500ms 동안 대기합니다. 

           analogWrite(B_LED, 123);     // Blue LED의 밝기를 중간으로 합니다. 
           delay(500); // 500ms 동안 대기합니다. 

            analogWrite(B_LED, 0);    // Blue LED의 밝기를 최소로 합니다. 
           delay(500); // 500ms 동안 대기합니다.         
    }
}

