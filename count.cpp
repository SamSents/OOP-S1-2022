//
//  count.cpp
//  
//
//  Created by Sam Sentschuk on 1/3/22.
//

#include <iostream>

int count(int array[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] %2 == 0) {
            total ++;
        }
    }

    return total;
}

