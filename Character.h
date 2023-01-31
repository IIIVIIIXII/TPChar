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

  virtual std::string whatAmI() const = 0;
  /*Ici cette fonction empêche la compilation lorsque
  Charactère n'a aucune classe fille et que l'on essaie d'utiliser
  le constructeur car cette fonction est ambigë pour la classe Character*/


  protected :
  float speed_;
  float max_speed_;

  private :

};

class Mario : public Character{
  public:
    std::string whatAmI() const;
  private:
};

class Yoshi : public Character{
  public:
    Yoshi(int crests);
    Yoshi();
    ~Yoshi();
    std::string whatAmI() const;
    void accelerate();
  private:
    int* crests_;
};

#endif
