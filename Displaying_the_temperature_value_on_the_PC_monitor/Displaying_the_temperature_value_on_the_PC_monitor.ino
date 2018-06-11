// 온도값을 PC 모니터에 표시하기 
const int temperaturePin = 2;  //  온도 핀이 연결된 핀을 2번으로 설정  
void setup()
{
  pinMode(temperaturePin, INPUT);   //  온도 핀을 입력으로 설정
    Serial.begin(9600);  // 시리얼 데이터를 주고받을 수 있게 준비함
  }                            // 속도=9600(bps)
void loop()
{
  int reading = analogRead(temperaturePin);    // 아날로그 입력 온도값을 읽음  
Serial.print(((3.0*reading/1024.0))*100);           // LM35 온도 계산법 =             
                                                             // 온도 = (3.0*reading*100.0)/1024.0
Serial.println("c");     // 컴퓨터에 “C” 문장을 시리얼 통신으로 보냄                    
delay(1000);           // 시리얼 포터의 버퍼를 방지하기 위함 
}

