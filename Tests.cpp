#include <iostream>
#include "Character.h"

int main(){
  Character mario = Character();
  std::cout<<"Vitesse : "<<mario.getSpeed()<<" Vitesse max : "<< mario.getMaxSpeed()<<std::endl;
  mario.accelerate();
  std::cout<<"Acceleration Vitesse : "<<mario.getSpeed()<<" Vitesse max : "<< mario.getMaxSpeed()<<std::endl;
  mario.accelerate();
  mario.accelerate();
  mario.accelerate();
  mario.accelerate();
  mario.accelerate();
  mario.accelerate();
  mario.accelerate();
  mario.accelerate();
  mario.accelerate();
  mario.accelerate();
  std::cout<<"Dépasse vmax ? Vitesse : "<<mario.getSpeed()<<" Vitesse max : "<< mario.getMaxSpeed()<<std::endl;

  
}
