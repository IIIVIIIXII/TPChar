#include <iostream>
#include <string>
#include <vector>
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
  //Course
  Yoshi yos,dino;
  Mario plumb, ewego,ahha;
  std::vector<Character*> participants = {&dino,&ahha,&yos,&plumb,&ewego};
  std::cout<<"Course 1"<<std::endl;
  for (auto e:participants){
    e->accelerate();
    if (e->maxSpeed()==10){
      std::cout<<e->whatAmI()<<" a gagné !"<<std::endl;
      break;
    }
	}

  Yoshi yos1,dino1;
  Mario plumb1, ewego1,ahha1;
  std::vector<Character*> participants1 = {&dino1,&ahha1,&yos1,&plumb1,&ewego1};
  std::cout<<"Course 2"<<std::endl;
  for (auto vIter = std::begin(participants1); vIter != std::end(participants1); ++vIter){
    (*vIter)->accelerate();
    if ((*vIter)->maxSpeed()==10){
      std::cout<<(*vIter)->whatAmI()<<" a gagné !"<<std::endl;
      break;
    }
	}

  Yoshi yosh = Yoshi(5);
  std::cout<<yosh.whatAmI()<<std::endl;
}
