#include "person.h"
#include <iostream>
using namespace std;
Person::Person(){
    name="Unnamed";
    age=0;
}
Person::Person(string name, int age){
    this->name=name;
    this->age=age;
}
void Person::getInfo(){
    cout<<"Person class::Name: "<<name<<endl;
    cout<<"Person class::Age: "<<age<<endl;
}
