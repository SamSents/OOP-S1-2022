//
//  function-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 9/3/22.
//

#include <iostream>
#include <cmath>

int diagonal(int array[4][4]){

    int sum = 0;
    
for(int i = 0; i < 4; i++) {
    
    for(int j = 0; j < 4; j++) {
                   
                   if(i==j){
                              sum += array[i][j];
                   }
                   }
}


return sum;
}
