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
    
    int* pv[len+2];
    
    pv[0] = addy[1];
    pv[len+1] = addy[len-1];
    
    for (int i = 0; i<len; i++) {
        pv[i] = addy[i];
    }
    
    
    
    
    return *pv;
}
