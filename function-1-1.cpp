//
//  Function-1.cpp
//  
//
//  Created by Sam Sentschuk on 29/3/22.
//

#include <iostream>
#include <string>

using namespace std;

int *readNumbers() {
    
int *array = new int[10];
    


    for (int i = 0; i<10; i++) {
        cout << "ENTER NUMBER: " << endl;
        cin >> array[i];
      
    }

    
    
    
    return array;
}

void printNumbers(int *array,int length) {
    
    
    for (int i = 0; i<10; i++) {
        cout << array[i] << endl;
       
      
    }
    
    
    
    return;
}
