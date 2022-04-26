//
//  musician.cpp
//  
//
//  Created by Sam Sentschuk on 26/4/22.
//

#include "musician.hpp"
#include <iostream>
#include <string>
using namespace std;

// implementation of the default meerkat constructor
Musician::Musician():instrument("null"),experience(0){};

int Musician::get_experience(){
    
    int EXP;
    
    cout<<"how many years of experience does This person have?"<<endl;
    cin>>EXP;
    
    
    return EXP;
    
    
};
string Musician::get_instrument(){
    
    string INS;
    
    cout<<"What instrument do they play?"<<endl;
    cin>>INS;
    
    
    
    return INS;};






