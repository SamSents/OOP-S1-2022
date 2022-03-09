//
//  main-1-2.cpp
//  
//
//  Created by Sam Sentschuk on 9/3/22.
//

#include <iostream>
#include <cmath>

extern int identity(int array[10][10]);

int main(){
    
    
    int array[10][10] ={{1,0,0,0,0,0,0,0,0,0},{0,1,0,0,0,0,0,0,0,0},{0,0,1,0,0,0,3,0,0,0},{0,0,0,1,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,1,0,0,0,0},{0,0,0,0,0,0,1,0,0,0},{0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,0,1,0},{0,0,0,0,0,0,0,0,0,1}};
    
    std::cout << "indentity:  " << identity(array) << std::endl;
    
    
    
    
    
    
    
    
    
    return 0;
}
