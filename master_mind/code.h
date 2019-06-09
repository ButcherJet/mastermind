#ifndef CODE_H_
#define CODE_H_

#include <iostream>
#include <time.h>
#include <stdlib.h>

class code{
  public:
    code();
    ~code();

    //getters
    int getCoresEmJogo(int&) const;
    int getCode(int&) const;
    int getSize()const;

    //random code generator
    void setSize(int &a, bool b);
    void setCode();


  private:
    int *codigo;
    int size_codigo;
    int cores[10] = {1,2,3,4,5,6,7,8,9,10};
    int *cores_em_jogo;
    bool repeat_number;
};




#endif //CODE_H_
