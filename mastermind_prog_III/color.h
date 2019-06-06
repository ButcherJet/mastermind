#ifndef COLOR_H_
#define COLOR_H_

#include <iostream>

class color{
 public:

   std::string getColor(int &)const;
   

 private:
   std::string cores[10]={"RED","GREEN","BLUE","YELLOW","BROWN",
   "WHITE","PURPLE","GREY","PINK","ORANGE"};


};



#endif //COLOR_H_
