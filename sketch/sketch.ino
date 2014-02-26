
void setup() {                

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
 
}
 
 
int ledv[20]={1,2,3,4,5,6,7,8,9,10,11,12,13};


void loop() {
  
 int i=2;
 int j=12;
  while (i<=14 && j>=2)     //andata
{
digitalWrite(ledv[i],HIGH);
digitalWrite(ledv[j],HIGH);
delay(100);
digitalWrite(ledv[i],LOW);
digitalWrite(ledv[j],LOW);
i++;
j--;

}

}



