//
//  Function1-4.cpp
//  
//
//  Created by Sam Sentschuk on 2/3/22.
//

#include <iostream>

int sum_arrayadd(int arrayA[], int arrayB[], int n) {
    int totalA = 0;
    int totalB = 0;
    int ABsum = 0;
    

    for (int i = 0; i < n; i++) {

            totalA += arrayA[i];
        totalB += arrayB[i];
        
        
    }

    ABsum = totalA + totalB;
    
    if (n == 0) {
        return 0;
    }
    
    
    return ABsum;
}
