//
//  cart.hpp
//  
//
//  Created by Sam Sentschuk on 6/4/22.
//

#ifndef cart_hpp
#define cart_hpp
#endif /* cart_hpp */
#include <iostream>
#include <iostream>
#include "meerkat.h"
using namespace std;


class cart: public meerkat{
    meerkat s1;
    meerkat s2;
    meerkat s3;
    meerkat s4;
    meerkat s5;
    
}


public:


cart();                         // create an empty cart object
bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
void emptyCart();               // remove all meerkats from the cart
void printMeerkats();           // print the name, a space, the age, then a new line
                                // for each meerkat in the order they were added
}
