#include <iostream>
#include <string>
#include "Character.h"

int main(){
  Mario joueur;
  std::cout<<"Vitesse : "<<joueur.speed()<<" Vitesse max : "<< joueur.maxSpeed()<<std::endl;
  joueur.accelerate();
  std::cout<<"Acceleration Vitesse : "<<joueur.speed()<<" Vitesse max : "<< joueur.maxSpeed()<<std::endl;
  joueur.breaks();
  std::cout<<"Ralentis Vitesse : "<<joueur.speed()<<" Vitesse max : "<< joueur.maxSpeed()<<std::endl;
  joueur.breaks();
  std::cout<<"Moins vite que 0? Vitesse : "<<joueur.speed()<<" Vitesse max : "<< joueur.maxSpeed()<<std::endl;
  std::cout<<"Je suis : "<<joueur.whatAmI()<<std::endl;
  Yoshi joueurDeux;
  std::cout<<"Je suis : "<<joueurDeux.whatAmI()<<std::endl;
  std::cout<<joueurDeux.whatAmI()<<" Vitesse : "<<joueurDeux.speed()<<" Vitesse max : "<< joueurDeux.maxSpeed()<<std::endl;
  joueurDeux.accelerate();
  std::cout<<joueurDeux.whatAmI()<<" J'accélère plus vite Vitesse : "<<joueurDeux.speed()<<" Vitesse max : "<< joueurDeux.maxSpeed()<<std::endl;
  joueurDeux.accelerate();joueurDeux.accelerate();joueurDeux.accelerate();joueurDeux.accelerate();joueurDeux.accelerate();
  std::cout<<joueurDeux.whatAmI()<<" J'accélère plus vite Vitesse : "<<joueurDeux.speed()<<" Vitesse max : "<< joueurDeux.maxSpeed()<<std::endl;
}
