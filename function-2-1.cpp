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
    
    int temp =10;
    cout << "phase at " << temp << "K is: " << get_phase(temp) << endl;
    int temp2 =273;
    cout << "phase at " << temp << "K is: " << get_phase(temp2) << endl;
    int temp3 =293;
    cout << "phase at " << temp << "K is: " << get_phase(temp3) << endl;
    int temp4 =4700;
    cout << "phase at " << temp << "K is: " << get_phase(temp4) << endl;
    int temp5 =5000;
    cout << "phase at " << temp << "K is: " << get_phase(temp5) << endl;
    
    return 0;
    
}
