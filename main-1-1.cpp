//
//  function-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 31/3/22.
//

#include <iostream>

using namespace std;

extern int *pad_array(int *vals, int len);

int main(){
    
    int vals[5] = {1,2,3,4,5};
    int len = 5;


    
    int *pv = pad_array(vals, len);
    
    
    for (int i = 0; i<len+2; i++) {
        cout << pv[i] << endl;
    }
    
    
    
    
    
    return 0;
}
