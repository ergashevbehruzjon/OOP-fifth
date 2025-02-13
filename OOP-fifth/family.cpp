#include "family.h"
#include <iostream>
using namespace std;

Family::Family():Person(){
    surname="Unknown";
    numRelatives=0;
}

Family::Family(string name,int age,string surname,int numRelatives):Person(name,age){
    this->surname=surname;
    this->numRelatives=numRelatives;
}
