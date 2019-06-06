#ifndef GAME_H_
#define GAME_H_

#include "color.h"


class game {
  public:
    void chooseColor(int &);//choose the number of color in game 4-10

    void chooseSize(int &);//choose the code size 4-6

    void repeatColors(bool &);//possible to repeat repeatColors

    void chooseTry(int &);//the number of guessings

    void createCode(); //create  random code

    game();
    ~game();



  private:
    color *cores;

    std::string *code;
    int size;

    int tMax;//max tries allowed

    int tAtual; //number of tries

    bool rColors;


};









#endif //GAME_H_
