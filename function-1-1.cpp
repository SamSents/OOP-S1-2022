//
//  function-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 23/3/22.
//

#include <iostream>
#include <string>
using namespace std;


void copy_2d_strings(std::string first[][2], std::string second[][2], int n)
{
    
    for (int i =0; i< n; i++) {
        for (int j =0 ; j<3; j++) {
            second[i][j] = first[i][j];
        }
    }
    
    return;
}
