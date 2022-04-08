//
//  meerkat.hpp
//  
//
//  Created by Sam Sentschuk on 4/4/22.
#ifndef meerkat_H
#define meerkat_H
#include <string>


using namespace std;

class meerkat

{
    
    
protected:
    
    string mkname;
    int mkAge;
    
public:

    
    
    meerkat() ;                      // no name or age is required to create a meerkat
    void setName(string meerkname);   // change the meerkat's name
    string getName();
    void setAge(int meerkage);        // change the meerkat's age
    int getAge();};

#endif
