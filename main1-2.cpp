


#include <iostream>

extern double doubleAVG(int[], int);


int main () {
    int array[5] = {4,5,6,7,44};
       std::cout << "The average is: " << doubleAVG(array, 5) << std::endl;
       return 0;
   }
