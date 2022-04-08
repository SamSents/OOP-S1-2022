//
//  cart.cpp
//  
//
//  Created by Sam Sentschuk on 6/4/22.
//

#include "cart.h"
#include <string>
#include <iostream>


using namespace std;

cart::cart(){
    
    i=0;
    
};

bool cart::addMeerkat(meerkat cat){
    
    if (i==4) {
        return false;
    } else {
        meercart[i] = cat;
        i+= 1;
        return true;
    }

};
void cart::emptyCart(){
    
    i = 0;
    return;
};

void cart::printMeerkats(){
    
    cout<<meercart[0].getName()<<" "<< meercart[0].getAge()<<endl;
    cout<<meercart[1].getName()<<" "<< meercart[1].getAge()<<endl;    cout<<meercart[2].getName()<<" "<< meercart[2].getAge()<<endl;
    cout<<meercart[3].getName()<<" "<< meercart[3].getAge()<<endl;
    cout<<meercart[4].getName()<<" "<< meercart[4].getAge()<<endl;
};
