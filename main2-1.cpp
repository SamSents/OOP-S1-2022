//
//  main2-1.cpp
//  
//
//  Created by Sam Sentschuk on 2/3/22.
//

#include <iostream>


extern int minArray(int[], int);

int main () {
    int arraym[7] = {4,5,6,3,8,9,4};
       std::cout << "The min is: " << minArray(arraym, 7) << std::endl;
       return 0;
   }

