//
//  main-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 9/3/22.
//

#include <iostream>
#include <cmath>


extern int diagonal(int array[4][4]);

int main(){
    
    int array[4][4] ={{0,1,4,5}, {2,3,5,6}, {4,5,6,7}, {1,2,3,4}};
    
    std::cout << "The diagonal sum is: " << diagonal(array) << std::endl;
    
    
    
    
    
    return 0;
}
