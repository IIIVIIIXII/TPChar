#include <iostream>
#include "Character.h"

int main(){
  Character mario = Character();
  std::cout<<"Vitesse : "<<mario.getSpeed()<<" Vitesse max : "<< mario.getMaxSpeed()<<std::endl;
  mario.accelerate();
  std::cout<<"Acceleration Vitesse : "<<mario.getSpeed()<<" Vitesse max : "<< mario.getMaxSpeed()<<std::endl;
  mario.breaks();
  std::cout<<"Ralentis Vitesse : "<<mario.getSpeed()<<" Vitesse max : "<< mario.getMaxSpeed()<<std::endl;
  mario.breaks();
  std::cout<<"Moins vite que 0? Vitesse : "<<mario.getSpeed()<<" Vitesse max : "<< mario.getMaxSpeed()<<std::endl;
}
