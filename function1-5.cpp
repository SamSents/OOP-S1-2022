//
//  Function1-5.cpp
//  
//
//  Created by Sam Sentschuk on 2/3/22.
//

#include <iostream>

int counteven(int n) {
    int totalev = 0;
    
    
    
    
    
    for (int i = 1; i <= n; i++) {

        if (i %2 == 0) {
            totalev ++;
        }
        
    }

    return totalev;
}
