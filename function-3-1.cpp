//
//  function-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 31/3/22.
//



#include <iostream>
#include <cmath>

bool more_positive(int vals[], int length){
    
    int sump =0;
    int sumn =0;
    
    for (int i = 0; i < length; i ++) {
        if (vals[i] < 0) {
            sumn++;
        }
        
        if (vals[i] > 0) {
            sump++;
        }

        
        }
    
    
    if (sumn > sump) {
        return false;
    
    }
    
    if (sump > sumn) {
        return true;
    
    }
    
}
