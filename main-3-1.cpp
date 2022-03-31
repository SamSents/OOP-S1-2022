//
//  function-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 31/3/22.
//

#include <iostream>
#include <cmath>

extern bool more_positive(int vals[], int length);
using namespace std;

int main(){

int vals[]={-1,1,-2,2,-3,3,0,0,-5};
int vals_length=9;
bool res=more_positive(vals,vals_length);

    if (res == true) {
        cout<<"more positive" << endl;
    } else {
        cout<<"more negative"<< endl;
    }

    return 0;
    
}
    
    
    
    
    
    
    
    

