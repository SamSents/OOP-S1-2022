//
//  main-1-3.cpp
//  
//
//  Created by Sam Sentschuk on 9/3/22.
//

#include <iostream>
#include <cmath>


extern void count_numbers(int array[4][4]);

int main(){
    
    int array[4][4] ={{0,1,4,5}, {2,3,5,6}, {4,5,6,7}, {1,2,3,4}};
    
  
    
    count_numbers(array);
    
    
    
    
    
    return 0;
}
