#include "square.h"
#include <string>
#include <iostream>

square::square(){};

square::square(std::string Name, int SideLength){
    setName(Name);
    sideLength = SideLength;
};

int square::getSideLength(){
    return sideLength;
};