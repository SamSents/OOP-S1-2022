//
//  function-1-3.cpp
//  
//
//  Created by Sam Sentschuk on 23/3/22.
//

#include <iostream>
#include <string>
using namespace std;

void cpyia(int old_array[],int new_array[],int length) {
    
    int * addy[5];
  
    
    for (int i =0 ; i< length; i++) {
        addy[i] = &old_array[i];
    }
    
    
    for (int i =0 ; i< length; i++) {
        new_array[i] = *addy[i];
    }
    
    
    
    
    
    return;
}
