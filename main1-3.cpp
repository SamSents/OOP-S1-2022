//
//  main1-3.cpp
//  
//
//  Created by Sam Sentschuk on 1/3/22.
//
#include <iostream>
extern int count(int[], int, int);

int main () {
    int num = 5;
    int array[10] = {4,5,6,7,8,1,2,3,4,5};
    std::cout << "The number is: " << count(array, 10, num) << std::endl;
       return 0;
   }
