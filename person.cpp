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
person::person(std::string pname, int psalary){

    name = pname;
salary = psalary


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

int person::getSalary(){return salary;};
std::string person::getName(){return name;};
