//
//  main-1-4.cpp
//  
//
//  Created by Sam Sentschuk on 23/3/22.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

extern void cpyda(double old_array[],double new_array[],int length) ;

int main () {
    
    
    double old_array[5] = {1,2,3,4,5};
    int length = 5;
    double new_array [length];
    cpyda(old_array, new_array, length);
    
    
    
    return 0;
    
}
