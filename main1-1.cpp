//
//  main1-1.cpp
//  
//
//  Created by Sam Sentschuk on 1/3/22.
//

#include <iostream>


extern int sum_array(int[], int);

int main () {
    int array[5] = {4,5,6,7,8};
       std::cout << "The number is: " << sum_array(array, 5) << std::endl;
       return 0;
   }
