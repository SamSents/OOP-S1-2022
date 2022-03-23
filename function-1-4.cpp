//
//  function-1-4.cpp
//  
//
//  Created by Sam Sentschuk on 23/3/22.
//

#include <iostream>
#include <string>
using namespace std;



void cpyda(double *old_array,double *new_array,int length) {

double * addy[5];


for (int i =0 ; i< length; i++) {
    addy[i] = &old_array[i];
}


for (int i =0 ; i< length; i++) {
    new_array[i] = *addy[i];
}





return;
}
