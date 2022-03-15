//
//  main-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 15/3/22.
//

#include <iostream>
#include <cmath>
#include <string>

extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);


int main(){
  
    
    
    
    std::string courses[4] ={"Math","Math2","CS","PHYS"};
    
    std::string students[2] = {"Sam","Kael"};

    
    
    int nstudents = 2;
    int report_card[2][4] = {{90,80,95,99},{40,50,64,30}};
    
    
    print_class(courses, students, report_card, nstudents);
    
}
