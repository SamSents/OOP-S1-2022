//
//  function-2-1.cpp
//  
//
//  Created by Sam Sentschuk on 23/3/22.
//
#include <iostream>
#include <string>
using namespace std;



void print_sevens(int *nums,int length){

int * addy[length];
    int Sev[length];


for (int i =0 ; i< length; i++) {
    addy[i] = &nums[i];
    Sev[i] = *addy[i];
}

    for (int i =0 ; i< length; i++) {
        if (Sev[i]%7==0) {
            cout<<Sev[i]<<endl;
        }
        }
    
   





return;
}
