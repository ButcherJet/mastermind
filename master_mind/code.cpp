#include "code.h"

code::code(){
  size_codigo = 0;
  codigo = nullptr;
  cores_em_jogo = nullptr;
  repeat_number = true;
}

code::~code(){
  delete codigo;
  delete cores_em_jogo;
}

//getters

int code::getCoresEmJogo(int& a) const{
  return cores_em_jogo[a];
}

int code::getCode(int& a) const{
  return codigo[a];
}

int code::getSize()const{
  return size_codigo;
}

//setters

void code::setSize(int &a, bool b){
    size_codigo = a;
    codigo = new int[a];
    cores_em_jogo = new int[a];

    repeat_number = b;


    for (int i = 0; i < size_codigo; i++){
      cores_em_jogo[i] = cores[i];
    }

    for (int i = 0; i < size_codigo; i++){
      codigo[i] = 0;
    }
  }




//code generator
void code::setCode(){
  srand(time(NULL));

  int a;

  if(repeat_number){
    for(int i = 0; i < size_codigo;i++){
      a = rand()%size_codigo;
      codigo[i] = cores_em_jogo[a];
    }
  }
  else{

    int valores[size_codigo] = {0};
    for(int i = 0; i < size_codigo;i++){
      a = rand()%size_codigo;

      valores[i] = a;

      for (int j = 0 ; j < i;j++){ //dar um jeito de gerar numeros que nao repetem
        if(valores[j] == a){
          a = rand()%size_codigo;
          j = 0;
        }
      }
      codigo[i] = cores_em_jogo[a];
    }
  }
}
