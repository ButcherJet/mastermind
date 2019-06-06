#include "game.h"
//constructors && destructors

game::game(){
  tAtual = 0;
}

game::~game(){
  delete[] cores;
  delete[] code;
}

void game::chooseColor(int &p){
  cores = new color[p];
  
}

void game::chooseSize(int &p){
  code = new std::string[p];
  size = p;
}

void game::repeatColor(bool &p){
  rColors = p;
}

void chooseTry(int &p){
  tMax = p;
}

void game::createCode(){
  if (rColors == true){

  }
}
