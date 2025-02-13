
#ifndef family_h
#define family_h
#include "person.h"
using namespace std;
class Family:public Person{
    string surname;
    int numRelatives;
public:
    Family();
    Family(string name,int age,string surname,int numRelatives);
    void getInfo();
    virtual void motto();
};

#endif
