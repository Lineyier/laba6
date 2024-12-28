#pragma once
#include "object.h"

class square: public object{
    public:
    square();
    square(std::string Name, int SideLength);
    int getSideLength();
    int getArea();
    int getPerimeter();
    private:
    int sideLength;
};
