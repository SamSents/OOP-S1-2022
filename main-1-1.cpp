//
//  main-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 26/4/22.
//

#include <iostream>
#include "musician.hpp"
#include <string>


using namespace std;
// main program
int main()
{
    Musician A;
    string instr = A.get_instrument();
    int exp = A.get_experience();
    
    cout << "The musician plays " << instr << " with  " << exp << " years experience" << endl;
    
}
