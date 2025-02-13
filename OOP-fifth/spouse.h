
#ifndef spouse_h
#define spouse_h
#include "family.h"
using namespace std;
class Spouse:public Family{
    string partnerName;
public:
    Spouse();
    Spouse(string name, int age, string surname, int numRelatives, string partnerName);
    void getInfo();
    void motto();
};

#endif /* spouse_h */
