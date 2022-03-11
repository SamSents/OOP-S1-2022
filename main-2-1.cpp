//
//  main-2-1.cpp
//  
//
//  Created by Sam Sentschuk on 11/3/22.
//

#include <stdio.h>
#include <string>
#include <cmath>

extern void print_as_binary(std::string decimal_number);

int main(){
    
    
    std::string decimal_number = "2";
    
    print_as_binary(decimal_number);
    
    return 0;
}
