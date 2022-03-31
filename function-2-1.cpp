//
//  function-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 31/3/22.
//

#include <iostream>
#include <string>
using namespace std;


extern string get_phase(int temp);

int main(){
    
    int temp = 25683;
    cout << "phase at " << temp << "K is: " << get_phase(temp) << endl;
    
    
    return 0;
    
}
