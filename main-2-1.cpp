//
//  main-2-1.cpp
//  
//
//  Created by Sam Sentschuk on 6/4/22.
//

#include "cart.h"
#include <iostream>
#include <string>

using namespace std;

int main(void){
    

    
    meerkat meer1;
    meerkat meer2;
    meerkat meer3;
    meerkat meer4;
    meerkat meer5;
    
    meer1.setName("tommy");
    meer1.setAge(57);
    meer2.setName("arthur");
    meer2.setAge(75);
    meer3.setName("john");
    meer3.setAge(37);
    meer4.setName("pol");
    meer4.setAge(12);
    meer5.setName("jill");
    meer5.setAge(11);
    
    cart c;
    if (c.addMeerkat(meer1)==false) {
        cout<<"No room available" << endl;
    }
    
    if (c.addMeerkat(meer2)==false) {
        cout<<"No room available" << endl;
    }

    if (c.addMeerkat(meer3)==false) {
        cout<<"No room available" << endl;
    }
   
    if (c.addMeerkat(meer4)==false) {
        cout<<"No room available" << endl;
    }

    if (c.addMeerkat(meer5)==false) {
        cout<<"No room available" << endl;
    }
    
    
    
    return 0;
}
