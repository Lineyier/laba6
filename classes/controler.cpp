#include "controler.h"
#include "doc.h"
#include "object.h"
#include "square.h"
#include <string>
#include <iostream>

controler::controler(){};

void controler::start(){
    doc d;
    int answer1;
    std::string answer2;
    bool triger = 1;
    std::cout << "1. create file\n2. import file\n3. exit\n";
    std::cin >> answer1;
    if(answer1 == 2){
        std::cout << "enter the path: ";
        std::cin >> answer2;
        doc d(answer2);
    }
    if(answer1 == 3){
        triger = 0;
    }
    while (triger){

        std::cout << "\n\n1. add object\n2. del object\n3. get list objects\n4. export file\n5. exit\n";
        std::cin >> answer1;
        if(answer1 == 1){
            std::string name;
            std::cout << "select the type of object: \n"
            << "    1. object\n" << "    2. square\n";
            std::cin >> answer1;
            std::cout << "enter the name of the object: ";
            std::cin >> name;
            if(answer1 == 1){
                object obj(name);
                d.addObject(obj);
            }
            else if(answer1 == 2){
                int SideLength;
                std::cout << "enter the SideLength of the object: ";
                std::cin >> SideLength;
                square obj(name, SideLength);
                d.addObject(obj);
            }
        }
        else if(answer1 == 2){
            d.delObject();
        }
        else if(answer1 == 3){
            d.getObjevts();
        }
        else if(answer1 == 4){
            std::cout << "Enter the path: ";
            std::cin >> answer2;
            d.exportDoc(answer2);
        }
        else if(answer1 == 5){
            triger = 0;
        }
    }
    return;
};