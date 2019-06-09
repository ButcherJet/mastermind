#include "game.h"
#include "code.h"

int main(){
  int numeroDeCor = 5;
  int numeroTetativa = 2;

  int v[5] = {1,2,3,4,5};
  bool d = true;


  game a(numeroDeCor,numeroTetativa,d);

  a.setSenha();

  a.setTentativa(v,5);

  for(int i = 0;i < numeroDeCor; i++){
    std::cout<<a.getSenha(i)<<"\t";
  }
  std::cout<<std::endl;

  for (int i = 0;i <numeroDeCor;i++){
    std::cout<<a.getTentativa(i)<<"\t";
  }



}
