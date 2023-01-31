#include <iostream>
#include "Character.h"

/*------------------------------
        Constructeur
------------------------------*/

Character::Character(){ //Constructeur par défaut
  speed_=0;
  max_speed_=10;
}
Character :: ~Character(){ // destructeur
}
/*------------------------------
        Autres
------------------------------*/

void Character::accelerate(){//augmente la vitesse de 1
  if (speed_ < max_speed_){
    speed_=speed_+1;
  }
}

void Character::breaks(){
  if (speed_ > 0){//réduit la vitesse de 1
    speed_=speed_-1;
  }
}
