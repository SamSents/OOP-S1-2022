//
//  function1-1.cpp
//  
//
//  Created by Sam Sentschuk on 1/3/22.
//

#include <iostream>

int sum_array(int array[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {

            total += array[i] ;
        
    }

    return total;
}
