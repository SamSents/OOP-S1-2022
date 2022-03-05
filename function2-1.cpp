//
//  Function2-1.cpp
//  
//
//  Created by Sam Sentschuk on 2/3/22.
//


#include <iostream>

int minArray(int arraym[], int n) {
    int min = 0;
    min = arraym[0];
    for (int i = 0; i < n; i++) {
        
        if (arraym[i] < min) {
            min = arraym[i];
        }

        if (n < 0) {
            return 0;
        }
        
    }

    return min;
}
