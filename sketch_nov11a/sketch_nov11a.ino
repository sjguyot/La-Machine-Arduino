#include "Servo.h"

Servo servo; // création de l'objet "servo"

void setup() {
   servo.attach(10); // attache le servo au pin spécifié
}

void loop() {
  int choose = random(1, 3);
  if (choose = 1) {
    ScenarioUn();    
    }
  else if (choose = 2){
    }
}

// les positions recommandés pour le servo-moteur vont de 0 à 100(le boutton est cliqué)

void ScenarioUn() {
   servo.write(20); // demande au servo de se déplacer à cette position
   delay(1000); // attend 1000 ms entre changement de position

   servo.write(100); // demande au servo de se déplacer à cette position
   delay(1000); // attend 1000 ms avant le changement de position
// l'espace n'est pas obligatoire
   servo.write(0); // demande au servo de se déplacer à cette position
  }

void ScenarioDeux() {
  servo.write(20);
  delay(1000);
  servo.write(53.0);
  delay(84);
  servo.write(54.0);
  delay(84);
  servo.write(54.0);
  delay(84);
  servo.write(56.0);
  delay(84);
  servo.write(56.0);
  delay(83);
  servo.write(57.0);
  delay(84);
  servo.write(57.0);
  delay(83);
  servo.write(56.0);
  delay(83);
  servo.write(57.0);
  delay(83);
  servo.write(57.0);
  delay(83);
  servo.write(58.0);
  delay(83);
  servo.write(58.0);
  delay(83);
  servo.write(57.0);
  delay(83);
  servo.write(59.0);
  delay(83);
  servo.write(59.0);
  delay(84);
  servo.write(59.0);
  delay(84);
  servo.write(59.0);
  delay(84);
  servo.write(60.0);
  delay(84);
  servo.write(60.0);
  delay(84);
  servo.write(61.0);
  delay(84);
  servo.write(61.0);
  delay(84);
  servo.write(61.0);
  delay(84);
  servo.write(62.0);
  delay(84);
  servo.write(63.0);
  delay(84);
  servo.write(64.0);
  delay(84);
  servo.write(64.0);
  delay(84);
  servo.write(66.0);
  delay(84);
  servo.write(66.0);
  delay(84);
  servo.write(68.0);
  delay(84);
  servo.write(69.0);
  delay(84);
  servo.write(70.0);
  delay(84);
  servo.write(72.0);
  delay(84);
  servo.write(73.0);
  delay(84);
  servo.write(74.0);
  delay(84);
  servo.write(75.0);
  delay(84);
  servo.write(76.0);
  delay(83);
  servo.write(77.0);
  delay(84);
  servo.write(79);
  delay(84);
  servo.write(80.0);
  delay(84);
  servo.write(82.0);
  delay(84);
  servo.write(83.0);
  delay(84);
  servo.write(83.0);
  delay(84);
  servo.write(84.0);
  delay(84);
  servo.write(83.0);
  delay(84);
  servo.write(83.0);
  delay(84);
  servo.write(83.0);
  delay(84);
  servo.write(83.0);
  delay(84);
  servo.write(85.0);
  delay(84);
  servo.write(86.0);
  delay(84);
  servo.write(87.0);
  delay(84);
  servo.write(88.0);
  delay(84);
  servo.write(88.0);
  delay(84);
  servo.write(89.0);
  delay(84);
  servo.write(89.0);
  delay(84);
  servo.write(88.0);
  delay(84);
  servo.write(90.0);
  delay(84);
  servo.write(90.0);
  delay(84);
  servo.write(90.0);
  delay(84);
  servo.write(91.0);
  delay(84);
  servo.write(90.0);
  delay(84);
  servo.write(91.0);
  delay(84);
  servo.write(92.0);
  delay(84);
  servo.write(91.0);
  delay(84);
  servo.write(92.0);
  delay(84);
  servo.write(92.0);
  delay(84);
  servo.write(92.0);
  delay(84);
  servo.write(92.0);
  delay(84);
  servo.write(92.0);
  delay(84);
  servo.write(92.0);
  delay(84);
  servo.write(92.0);
  delay(84);
  servo.write(92.0);
  delay(84);
  servo.write(92.0);
  delay(84);
  servo.write(92.0);
  delay(84);
  servo.write(93.0);
  delay(100);
  delay(1000);
  
  delay(1000);
  
  delay(10);
  servo.write(100);
  delay(1000);
  servo.write(0);
  }
