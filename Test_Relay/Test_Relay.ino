int IN1 = D0; //ต่อขา IN1 เข้ากับ D0 (Channel 1)
int IN2 = D1; //ต่อขา IN2 เข้ากับ D1 (Channel 2)
int IN3 = D2; //ต่อขา IN3 เข้ากับ D2 (Channel 3)
int IN4 = D3; //ต่อขา IN4 เข้ากับ D3 (Channel 4)

void setup() {
  Serial.begin(115200);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  delay(3000);//รอ 3 วินาที
  Serial.println("Relay ready...");
  delay(3000);//รอ 3 วินาที
} 

void loop() {
  
  digitalWrite(IN1,HIGH); //จ่ายสัญญาณสูง(ทำงาน)
  Serial.println("Relay1 : ON");
  delay(2000);//รอ 2 วินาที
  digitalWrite(IN1,LOW);//จ่ายสัญญาณตำ(ไม่ทำงาน)
  Serial.println("Relay1 : OFF");
  delay(2000);//รอ 2 วินาที

  digitalWrite(IN2,HIGH);//จ่ายสัญญาณสูง(ทำงาน)
  Serial.println("Relay2 : ON");
  delay(2000);//รอ 2 วินาที
  digitalWrite(IN2,LOW);//จ่ายสัญญาณตำ(ไม่ทำงาน)
  Serial.println("Relay2 : OFF");
  delay(2000);//รอ 2 วินาที

  digitalWrite(IN3,HIGH);//จ่ายสัญญาณสูง(ทำงาน)
  Serial.println("Relay3 : ON");
  delay(2000);//รอ 2 วินาที
  digitalWrite(IN3,LOW);//จ่ายสัญญาณตำ(ไม่ทำงาน)
  Serial.println("Relay3 : OFF");
  delay(2000);//รอ 2 วินาที

  digitalWrite(IN4,HIGH);//จ่ายสัญญาณสูง(ทำงาน)
  Serial.println("Relay4 : ON");
  delay(2000);//รอ 2 วินาที
  digitalWrite(IN4,LOW);//จ่ายสัญญาณตำ(ไม่ทำงาน)
  Serial.println("Relay4 : OFF");
  delay(2000);//รอ 2 วินาที
}
