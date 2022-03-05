//
//  Main1-4.cpp
//  
//
//  Created by Sam Sentschuk on 2/3/22.
//

#include <iostream>

extern int sum_arrayadd(int arrayA[], int arrayB[], int);


int main () {
    int arrayA[5] = {1,2,3,4,5};
    int arrayB[5] = {6,7,8,9,10};
    
       std::cout << "The number is: " << sum_arrayadd(arrayA, arrayB, 5) << std::endl;
       return 0;
   }
