#include "object.h"
#include <string>
#include <iostream>

object::object(){};

object::object(std::string Name){
    name = Name;
};

std::string object::getName(){
    return name;
};

void object::setName(std::string Name){
    name = Name;
};