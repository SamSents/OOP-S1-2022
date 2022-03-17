//
//  function-2-3.cpp
//  
//
//  Created by Sam Sentschuk on 17/3/22.
//

#include <iostream>
#include <math.h>

bool is_a_palindrome(int integers[], int length)
{
int i =0;
int j =length-1;


for(i=0; i<length && j>=0; i++, j--){
    
    if(integers[i]!=integers[j]){
        
        return false;
    }
}

    return true;

}

int sum_elements(int integers[], int length){
    int i = 0;
    int sumel = 0;
    
    for (i=0; i<length; i++) {
        sumel+= integers[i];
    }
    
    return sumel;
    
}

int sum_if_a_palindrome(int integers[], int length){
    int sum = 0;
    bool ispal = is_a_palindrome(integers, length);
    
    if (0>=length) {
        return -1;
    }
    
    if (ispal == 1) {
        sum = sum_elements(integers, length);
    }
    if (ispal == 0) {
        return -2;
    }
    
    return sum;
    
}
