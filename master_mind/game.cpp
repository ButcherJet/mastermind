#include "game.h"

//constructor
game::game(int &qtd, int &number,bool &a){
  senha.setSize(qtd,a);

  numberOfColors = number;
  qtd_tentativas = 0;
  qtd_tentativas_max = qtd;

  tentativas = new int*[senha.getSize()];
    for (int i = 0; i <senha.getSize(); i++){
      tentativas[i] = new int[qtd_tentativas];
    }
}

game::~game(){
  for (int i = 0; i < senha.getSize(); ++i)
    delete [] tentativas[i];
delete [] tentativas;

}

//getters
int game::getSenha(int &a)const{
  return senha.getCode(a);
}

void game::setTentativa(int *tentativa ,int n){
  for(int i = 0; i < n; i++){
    tentativas[i][qtd_tentativas] = tentativa[i];
  }
  qtd_tentativas++;
}

void game::setSenha(){
  senha.setCode();
}

int game::getTentativa(int &a){
  return(tentativas[a][qtd_tentativas]);
}
