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

/*------------------------------
        Autres
------------------------------*/

void Character::accelerate(){
  if (speed_ < max_speed_){
    speed_=speed_+1;
  }
}
