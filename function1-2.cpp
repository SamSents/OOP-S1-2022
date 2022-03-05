//
//  function1-2.cpp
//  
//
//  Created by Sam Sentschuk on 1/3/22.
//

#include <iostream>

double doubleAVG(int array[], int n) {
   
    double total = 0;
    double avg = 0.0;
    
    for (int i = 0; i < n; i++) {

            total += array[i] ;
        
    }
    
  
    
    if (n==0) {
        avg =0.0;
    }
    
  
    
    avg = total/n;

    return avg;
}
