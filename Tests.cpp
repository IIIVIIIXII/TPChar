#include <iostream>
#include "Character.h"

int main(){
  Character mario = Character();
  std::cout<<"Vitesse : "<<mario.speed()<<" Vitesse max : "<< mario.maxSpeed()<<std::endl;
  mario.accelerate();
  std::cout<<"Acceleration Vitesse : "<<mario.speed()<<" Vitesse max : "<< mario.maxSpeed()<<std::endl;
  mario.breaks();
  std::cout<<"Ralentis Vitesse : "<<mario.speed()<<" Vitesse max : "<< mario.maxSpeed()<<std::endl;
  mario.breaks();
  std::cout<<"Moins vite que 0? Vitesse : "<<mario.speed()<<" Vitesse max : "<< mario.maxSpeed()<<std::endl;
}
