//
//  person.hpp
//  
//
//  Created by Sam Sentschuk on 6/4/22.
//

#ifndef person_H
#define person_H


#include <string>
#endif

using namespace std;

class person

{
    
    
protected:
    
    string myname;
    int mysalary;
    
public:

    
    
    person(string name, int salary) ;
    
    void setName(string name);   // change the meerkat's name
    string getName();
    void setSalary(int salary);        // change the meerkat's age
    int getSalary();};

