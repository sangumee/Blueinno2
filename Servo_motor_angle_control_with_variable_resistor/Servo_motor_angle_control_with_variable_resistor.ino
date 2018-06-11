/*  가변 저항으로 DC 모터의 속도 제어하기
*/
int Enable = 4;  //  동작(속도) 스위칭이 연결된 핀을 4번으로 설정  
int In1 = 3;      // 모터 순방향 제어 핀이 연결된 핀을 3번으로 설정  
int In2 = 2;      // 모터 역방향 제어 핀이 연결된 핀을 2번으로 설정 
int Potent = 6;  // 가변저항기가 연결된 핀을 6번으로 설정 
  
int sensorValue = 0;  // 센서에서 나오는 값을 저장하기 위함
void setup() {
  pinMode(Enable , OUTPUT);   //  동작(속도) 스위칭 핀을 출력으로 설정 
  pinMode(In1, OUTPUT);        // 순방향 제어 핀을 출력으로 설정 
  pinMode(In2, OUTPUT);        //  역방향 제어 핀을 출력으로 설정 
 pinMode(Potent, INPUT);      // 가변 저항의 연결핀을 입력을  설정
}
void loop() {
 sensorValue = analogRead(Potent);  // 가변저항 값을 읽음 
 int speed = map(sensorValue, 0, 1023, 50, 255); 
 // 속도는 가변저항 값을 0 ~ 1023까지 읽고, 50~ 255로 정합니다.   

  analogWrite(Enable, speed);   // 동작(속도) 스위칭을 스피드로 출력합니다. 
  digitalWrite(In1, HIGH);         // 순방향으로 돌아가게 High 출력을 합니다. 
  digitalWrite(In2, LOW);          // 순방향으로 돌아가게 Low  출력을 합니다. 
}


