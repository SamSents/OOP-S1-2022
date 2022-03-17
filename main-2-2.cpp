//
//  main-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 17/3/22.
//

#include <iostream>

using namespace std;
extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
    
    int binary_digits[5] = {1,0,1,1,1};
    int number_of_digits = 5;
    
    
    cout<<binary_to_number(binary_digits, number_of_digits)<<endl;
    
    
    
    
    
    
    
    return 0;
}

