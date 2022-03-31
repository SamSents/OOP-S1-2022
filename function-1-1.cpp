//
//  function-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 31/3/22.
//

#include <iostream>

using namespace std;
int *pad_array(int *vals, int len){
    
    int *addy[len];
    
    
    for (int i = 0; i<len; i++) {
        addy[i] = &vals[i];

    }
    int first = *addy[0];
    int last = *addy[len-1];
    
    int pv[len+2];
    
    pv[0] = first;
    pv[len] = last;
   
    
    for (int i = 1; i<len; i++) {
        pv[i] = *addy[i];
    }
    
    
    
    
    return pv;
}
