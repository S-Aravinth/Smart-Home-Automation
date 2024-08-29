#define PIR_0 A0
#define PIR_1 A1
#define PIR_3 A2
#define PIR_4 A3
#define IR_1 A4
#define L1 3
#define L2 4
#define BL1 5
#define BL2 6
#define Door_Alarm 8
#define F1 9
#define F2 10
void setup()
{
 pinMode(PIR_0, INPUT);
 pinMode(PIR_1, INPUT);
 pinMode(IR_1, INPUT);
 pinMode(PIR_3, INPUT);
 pinMode(PIR_4, INPUT);
 pinMode(L1, OUTPUT);
 pinMode(L2, OUTPUT);
 pinMode(F1, OUTPUT);
 pinMode(F2, OUTPUT);
 pinMode(Door_Alarm, OUTPUT);
 pinMode(BL1, OUTPUT);
 pinMode(BL2, OUTPUT);
}
void loop()
{
 if(digitalRead (PIR_0==HIGH))
 {
 digitalWrite(L1, HIGH); 
 digitalWrite(F1, HIGH); 
 }
 else
 {
 digitalWrite(L1, LOW); 
 digitalWrite(F1, LOW); 
 }
 
 if(digitalRead (PIR_1==HIGH))
 {
 digitalWrite(L2, HIGH); 
 digitalWrite(F2, HIGH); 
 }
 else
 {
 digitalWrite(L2, LOW); 
 digitalWrite(F2, LOW);
 }
 
 if(digitalRead (IR_1==HIGH))
 {
 digitalWrite(Door_Alarm, LOW); 
 }
 else
 {
 digitalWrite(Door_Alarm, HIGH); 
 }
 if(digitalRead (PIR_3==HIGH))
 {
 digitalWrite(BL1, HIGH); 
 }
 else
 {
 digitalWrite(BL1, LOW);
 }
 
 if(digitalRead (PIR_4==HIGH))
 {
 digitalWrite(BL2, HIGH); 
 }
 else
 {
 digitalWrite(BL2, LOW);
 }
 
}
