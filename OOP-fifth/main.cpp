#include <iostream>
#include "spouse.h"
#include "parent.h"
using namespace std;
int main() {
//    Family f;
//    f.getInfo();
//    f.motto();	
//    f.Person::getInfo();
//    Person *p=&f;
//    p->Person::getInfo();
//    ((Family*)p)->Family::motto();
    Parent john("John", 34, "Smith",3,1);
    Spouse robert("Robert", 26, "Tomson", 5, "Rose");
    john.getInfo();
    john.motto();
    john.Family::getInfo();
    john.Family::motto();
    john.Person::getInfo();
    cout<<"---------------------------\n";
    robert.getInfo();
    robert.motto();
    robert.Family::getInfo();
    robert.Family:: motto();
    robert.Person::getInfo();
    cout<<"---------------------------\n";
    Person *p=&john;
    p->Person::getInfo();
    p->getInfo();
    cout<<"+++++++++++++++++++++++++++\n";
    ((Family *)p)->Family::getInfo();
    ((Family *)p)->Family:: motto();
    ((Family *)p)->getInfo();
    ((Family *)p)->motto();
    return 0;
    return 0;
}

