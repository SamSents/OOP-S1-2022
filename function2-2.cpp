//
//  function2-2.cpp
//  
//
//  Created by Sam Sentschuk on 4/3/22.
//


int maxarray(int arrayma[], int n) {
    int max = 0;
    max = arrayma[0];
    for (int i = 0; i < n; i++) {
        
        if (arrayma[i] > max) {
            max = arrayma[i];
        }

        if (n < 0) {
            return 0;
        }
        
    }

    return max;
}
