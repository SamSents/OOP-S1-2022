//
//  person.cpp
//  
//
//  Created by Sam Sentschuk on 6/4/22.
//

#include "person.h"
#include <iostream>
#include <string>


// implementation of the default meerkat constructor
person::person(std::string name, int salary):myname("n/a"),mysalary(0){};





void person::setName(std::string name)
{
    myname = name;
    return;

}

void person::setSalary(int salary)
{

     mysalary = salary;
    
    return;
};

int person::getSalary(){return mysalary;};
std::string person::getName(){return myname;};
