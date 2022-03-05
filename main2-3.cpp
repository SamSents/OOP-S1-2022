//
//  main2-3.cpp
//  
//
//  Created by Sam Sentschuk on 4/3/22.
//
#include <iostream>
#include <stdlib.h>

extern void twofivenine(int array[], int n =10);

int main () {
    int array[10] = {1,2,3,4,5,6,7,8,9,2};
    std::cout << twofivenine(array[10], 10) << std::endl;
       return 0;
   }
