//
//  person.cpp
//  
//
//  Created by Sam Sentschuk on 6/4/22.
//

#include "person.h"
#include <iostream>
#include <string>
using namespace std;

// implementation of the default meerkat constructor
person::person(string name, int salary):myname("n/a"),mysalary(0){};





void person::setname(string name)
{
    myname = name;
    return;

}

void person::setsalary(int salary)
{

     mysalary = salary;
    
    return;
};

int person::getsalary(){return mysalary;};
string person::getname(){return myname;};
