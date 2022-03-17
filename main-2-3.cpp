//
//  main-2-3.cpp
//  
//
//  Created by Sam Sentschuk on 17/3/22.
//

#include <iostream>
#include <math.h>

using namespace std;

extern bool is_a_palindrome(int integers[], int length);
extern int sum_if_a_palindrome(int integers[], int length);
extern int sum_elements(int integers[], int length);

int main(){
    
    int integers[0] = {};
    int length = 0;
    
    
    cout<< sum_if_a_palindrome(integers, length)<<endl;
    
    
    return 0;
    
    
}
