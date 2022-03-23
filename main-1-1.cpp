//
//  main-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 23/3/22.
//

#include <iostream>
#include <string>
using namespace std;


extern void copy_2d_strings(std::string first[][2], std::string second[][2], int n) ;


int main () {
    string first[3][2] =  {{"yabba","dabba",},{"doo", "d",}, {"dee", "doo"}};
    
    string second[3][2];
    
    int n = 2;
    
    
    copy_2d_strings(first, second, n);
    
    
    
    
    
    
    
    
    
    
    return 0;
}
