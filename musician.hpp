//
//  musician.hpp
//  
//
//  Created by Sam Sentschuk on 26/4/22.
#ifndef meerkat_H
#define meerkat_H
#include <string>
#endif

using namespace std;

class Musician

{
    
    
protected:
    
    string instrument;
    int experience;
    
public:

    

    Musician();   // default constructor
    Musician(std::string instrument, int experience);
    std::string get_instrument();  // returns instrument
    int get_experience();       // returns experience

};
