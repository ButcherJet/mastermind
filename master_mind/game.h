#ifndef GAME_H_
#define GAME_H_

#include "code.h"

class game{
  public:
    game(int &qtd, int &number,bool &a);
    ~game();



    void setTentativa(int *,int n);

    void setSenha();

    int getSenha(int &)const;

    int getTentativa(int &);



  private:
    int numberOfColors;

    int **tentativas;

    code senha;

    int qtd_tentativas_max;
    int qtd_tentativas;

};




#endif //GAME_H_
