//
//  function-1-1..cpp
//  
//
//  Created by Sam Sentschuk on 17/3/22.
//

#include <iostream>

using namespace std;

void printer(int array[10][10]){
int i=0;
int j=0;


    for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            
            switch (j) {
                case 0:
                    cout<<array[i][j];
                    break;
                case 9:
                    cout<<" "<< array[i][j] << endl;
                    break;
                    
                default:
                    cout<<" "<< array[i][j];
                    break;
            }
            
        }
    }
}

