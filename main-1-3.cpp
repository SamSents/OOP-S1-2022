//
//  main-1-3.cpp
//  
//
//  Created by Sam Sentschuk on 23/3/22.
//
#include <iostream>
#include <string>
using namespace std;

extern void cpyia(int old_array[],int new_array[],int length) ;

int main () {
    
    
    int old_array[5] = {1,2,3,4,5};
    int length = 5;
    int new_array [5];
    cpyia(old_array, new_array, length);
    
    
    
    return 1;
    
}
