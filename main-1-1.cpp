//
//  main-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 29/3/22.
//

#include <iostream>
#include <string>
extern int *readNumbers();
extern void printNumbers(int *array,int length);

int main (){
    
    
    int *array = readNumbers();
    int length = 10;
    
    printNumbers(array, 10);
    
    return 0;
}
