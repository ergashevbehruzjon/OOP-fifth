
#ifndef parent_h
#define parent_h
#include "family.h"
using namespace std;
class Parent:public Family{
    int numChildren;
public:
    Parent();
    Parent(string name, int age, string surname, int numRelatives, int numChildren);
    void getInfo();
    void motto();
};

#endif /* parent_h */
