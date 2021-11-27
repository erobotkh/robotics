void Motor_Control(char text, int speeds) {
  if (text == 'F') {
    // wheels Right
    digitalWrite(IN1, 0);//Behine
    digitalWrite(IN2, 1);
    digitalWrite(IN3, 0);// Front
    digitalWrite(IN4, 1);

    digitalWrite(IN1_2, 0);
    digitalWrite(IN2_2, 1);
    digitalWrite(IN3_2, 0);
    digitalWrite(IN4_2, 1);
    analogWrite(ENA, speeds);
    analogWrite(ENB, speeds);
    analogWrite(ENA_2, speeds);
    analogWrite(ENB_2, speeds);
  }
  if (text == 'B') {
    digitalWrite(IN1, 1);
    digitalWrite(IN2, 0);
    digitalWrite(IN3, 1);
    digitalWrite(IN4, 0);

    digitalWrite(IN1_2, 1);
    digitalWrite(IN2_2, 0);
    digitalWrite(IN3_2, 1);
    digitalWrite(IN4_2, 0);
    analogWrite(ENA, speeds);
    analogWrite(ENB, speeds);
    analogWrite(ENA_2, speeds);
    analogWrite(ENB_2, speeds);
  }
  if (text == 'R') {
    digitalWrite(IN1, 1);
    digitalWrite(IN2, 0);
    digitalWrite(IN3, 1);
    digitalWrite(IN4, 0);

    digitalWrite(IN1_2, 0);
    digitalWrite(IN2_2, 1);
    digitalWrite(IN3_2, 0);
    digitalWrite(IN4_2, 1);
    analogWrite(ENA, speeds);
    analogWrite(ENB, speeds);
    analogWrite(ENA_2, speeds);
    analogWrite(ENB_2, speeds);
  }
  if (text == 'L') {
    digitalWrite(IN1, 0);
    digitalWrite(IN2, 1);
    digitalWrite(IN3, 0);
    digitalWrite(IN4, 1);

    digitalWrite(IN1_2, 1);
    digitalWrite(IN2_2, 0);
    digitalWrite(IN3_2, 1);
    digitalWrite(IN4_2, 0);
    analogWrite(ENA, speeds);
    analogWrite(ENB, speeds);
    analogWrite(ENA_2, speeds);
    analogWrite(ENB_2, speeds);
  }

  if (text == 'N') {
    digitalWrite(IN1, 1);
    digitalWrite(IN2, 1);
    digitalWrite(IN3, 1);
    digitalWrite(IN4, 1);

    digitalWrite(IN1_2, 1);
    digitalWrite(IN2_2, 1);
    digitalWrite(IN3_2, 1);
    digitalWrite(IN4_2, 1);
    analogWrite(ENA, speeds);
    analogWrite(ENB, speeds);
    analogWrite(ENA_2, speeds);
    analogWrite(ENB_2, speeds);
  }
}
void Motor_Water(char text) {
  if (text == '2') {
    digitalWrite(IN1_3, 0);
    digitalWrite(IN2_3, 1);
    digitalWrite(ENA_3, 250);
  }
  if (text == '4') {
    digitalWrite(IN1_3, 0);
    digitalWrite(IN2_3, 0);
    digitalWrite(ENA_3, 0);
  }
}
