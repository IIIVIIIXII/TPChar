#include <iostream>
#include "Character.h"

/*------------------------------
        Constructeur
------------------------------*/

Character::Character(){ //Constructeur par défaut
  speed_=0;
  max_speed_=10;
}

/*------------------------------
        Accesseurs
------------------------------*/

float Character::getSpeed(){
  return speed_;
}

float Character::getMaxSpeed(){
  return max_speed_;
}
