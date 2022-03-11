//
//  function-2-1.cpp
//  
//
//  Created by Sam Sentschuk on 11/3/22.
//
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void print_as_binary(std::string decimal_number){
    
    
    int number = std::stoi (decimal_number);

    int a[10];
    int i;
    
    for(i=0;number>0;i++){
        
        a[i]=number%2;
        number=number/2;
    }
        
        //printing
        for(i=i-1;i>=0;i--){
            
            cout<<a[i];
        }
   
    cout<<"\n";
    
    
    
    
}
