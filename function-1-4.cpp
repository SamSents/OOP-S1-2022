//
//  function-1-4.cpp
//  
//
//  Created by Sam Sentschuk on 9/3/22.
//
#include <iostream>
#include <cmath>


void print_scaled_matrix(int threebythree[3][3],int scale){
    
    
    for(int i = 0; i < 3; i++) {
        
        for(int j = 0; j < 3; j++) {
                       
            threebythree[i][j] = scale*threebythree[i][j];
                       }
    }

    std::cout << "" << threebythree[0][0] << " " << threebythree[0][1] << " " << threebythree[0][2] << std:: endl;
    std::cout << "" << threebythree[1][0] << " " << threebythree[1][1] << " " << threebythree[1][2] << std:: endl;
    std::cout << "" << threebythree[2][0] << " " << threebythree[2][1] << " " << threebythree[2][2] << std:: endl;

    return;
    
    
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 
