//
//  function-1-2.cpp
//  
//
//  Created by Sam Sentschuk on 9/3/22.
//
#include <iostream>
#include <cmath>

int identity(int array[10][10]){

    int sum1 = 0;
    int sum0 = 0;
    
    
for(int i = 0; i < 10; i++) {
    
    for(int j = 0; j < 10; j++) {
                   
                   if(i==j){
                              sum1 += array[i][j];
                   }
                   }
}

    for(int i = 0; i < 10; i++) {
        
        for(int j = 0; j < 10; j++) {
                       
                       if(i!=j){
                               
                           sum0 += array[i][j];
                       }
                       }
    
    }


    if(sum1 == 10 && sum0 == 0){
        
        return 1;
        
    }else{
            
            return 0;
        }
        
    
    
}
