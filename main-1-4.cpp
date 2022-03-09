//
//  main-1-4.cpp
//  
//
//  Created by Sam Sentschuk on 9/3/22.
//

#include <iostream>
#include <cmath>


extern void print_scaled_matrix(int threebythree[3][3], int scale);

int main(){
    
    int scale = 5;
    
    int threebythree[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
  
    
    print_scaled_matrix(threebythree, scale);
    
    
    
    
    
    return 0;
}
