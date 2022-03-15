//
//  Function-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 15/3/22.
//
#include <iostream>
#include <cmath>
#include <string>



using namespace std;

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents)
{
    cout<<"\t";
    
    for (int i=0; i<4; i++) {
        cout<< courses[i];
        cout<<"\t";
    }
    cout<<"\n";
    
    
    for (int j=0; j<nstudents; j++) {
        
        cout << students[j];
        
        for (int k=0;k<4 ;k++) {
            cout<<"\t";
            cout << report_card[j][k];
            
            
        }
        
        cout<<"\n";
        
    }
    
    
    
    return;
}
