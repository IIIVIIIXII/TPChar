#include <iostream>
#include "Character.h"

int main(){
  Character mario = Character();
  std::cout<<"Vitesse : "<<mario.getSpeed()<<" Vitesse max : "<< mario.getMaxSpeed()<<std::endl;
}
