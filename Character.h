#ifndef CHARACTER_H_
#define CHARACTER_H_

class Character{
  public :
  Character();// Constructeur par défaut
  //Accesseurs
  float getSpeed();//renvoie la vitesse
  float getMaxSpeed();//renvoie la vitesse max
  //Autres
  void accelerate();//augmente la vitesse de 1


  protected :

  private :

  float speed_;
  float max_speed_;


};

#endif
