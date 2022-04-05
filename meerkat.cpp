//
//  meerkat.cpp
//  
//
//  Created by Sam Sentschuk on 4/4/22.
//

#include "meerkat.h"
#include <iostream>
#include <string>
using namespace std;

// implementation of the default meerkat constructor
meerkat::meerkat():mkname("n/a"),mkAge(0){};




void meerkat::setName(string meerkname)
{
    mkname = meerkname;
    return;

}

void meerkat::setAge(int meerkage)
{

    mkAge = meerkage;
    return;
};

int meerkat::getAge(){return mkAge;};
string meerkat::getName(){return mkname;};


