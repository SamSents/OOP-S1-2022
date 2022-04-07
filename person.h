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



class person

{
    
    
protected:
    
    std::string myname;
    int mysalary;
    
public:

    
    
    person(std::string pname, int psalary) ;
    
    void setName(std::string name);   // change the meerkat's name
    std::string getName();
    void setSalary(int salary);        // change the meerkat's age
    int getSalary();};

