//
//  main-1-5.cpp
//  
//
//  Created by Sam Sentschuk on 10/3/22.
//

#include <cmath>
#include <iostream>

extern void print_summed_matrices(int array1[3][3],int array2[3][3]);

int main(){
    
    int array1[3][3] = {{1,2,3}, {1,2,3}, {1,2,3} };
    int array2[3][3] = {{4,5,6}, {4,5,6}, {4,5,6} };
    
    
    print_summed_matrices(array1, array2);
    
    
    
    
    
    return 0;
}
