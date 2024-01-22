const int AI2 = 4;     // Motor A
const int AI1 = 3;
const int PWM_A = 5;

const int BI2 = 9;    // Motor B
const int BI1 = 8;
const int PWM_B = 10;

void setup()
{
  pinMode(AI2, OUTPUT); 
  pinMode(AI1, OUTPUT); 
  pinMode(PWM_A, OUTPUT);
  pinMode(BI2, OUTPUT);
  pinMode(BI1, OUTPUT);
  pinMode(PWM_B, OUTPUT);
}

void loop()
{
 
 delay(1000);

  digitalWrite(AI2, LOW);
  digitalWrite(AI1, HIGH);
  analogWrite(PWM_A, 120);
  digitalWrite(BI2, LOW);
  digitalWrite(BI1, HIGH);
  analogWrite(PWM_B, 120);
  delay(2000);


  digitalWrite(AI2, LOW);
  digitalWrite(AI1, LOW);
  analogWrite(PWM_A, 0);
  digitalWrite(BI2, LOW);
  digitalWrite(BI1, LOW);
  analogWrite(PWM_B, 0);
  delay(3000);

  digitalWrite(AI2, HIGH);
  digitalWrite(AI1, LOW);
  analogWrite(PWM_A, 120);
  digitalWrite(BI2, HIGH);
  digitalWrite(BI1, LOW);
  analogWrite(PWM_B, 120);
  delay(2000);

  digitalWrite(AI2, LOW);
  digitalWrite(AI1, LOW);
  analogWrite(PWM_A, 0);
  digitalWrite(BI2, LOW);
  digitalWrite(BI1, LOW);
  analogWrite(PWM_B, 0);
  delay(5000);

 
  
}
