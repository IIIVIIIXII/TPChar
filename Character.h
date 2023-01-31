#ifndef CHARACTER_H_
#define CHARACTER_H_

class Character{
  public :
  Character();// Constructeur par défaut
  ~Character();//Destructeur
  //Accesseurs
  inline float speed() const{
    return speed_;
  };//renvoie la vitesse
  inline float maxSpeed() const{//renvoie la vitesse max
    return max_speed_;
  }
  //Autres
  void accelerate();//augmente la vitesse de 1
  void breaks();//réduit la vitesse de 1

  //virtual std::string WhatAmI() const = 0;


  protected :

  private :

  float speed_;
  float max_speed_;


};

#endif
