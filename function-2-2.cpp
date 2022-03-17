//
//  function-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 17/3/22.
//

#include <iostream>
#include <math.h>

int binary_to_number(int binary_digits[], int number_of_digits)
{
    int j= number_of_digits-1;
    int i = 0;
    int dec = 0;
    
    for (i=0; i<number_of_digits; i++) {
       
        if (binary_digits[i]==1) {
            dec+=pow(2,j);
        }
        
        j--;
    }
    
    
    
    return dec;
    
    
    
    
}
