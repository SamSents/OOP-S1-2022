//
//  main-1-2.cpp
//  
//
//  Created by Sam Sentschuk on 6/4/22.
//

#include <iostream>
#include "person.h"
#include <string>


using namespace std;
// main program
int main()
{
 person tom("TOM", 20000);
    tom.setName("tom");
    tom.setSalary(20000);
    
    cout << "person: " << tom.getName() << " makes $" << tom.getSalary() << " annually" << endl;
    
    person jen("jen", 3000000);
       jen.setName("jen");
       jen.setSalary(3000000);
       
       cout << "person: " << jen.getName() << " makes $" << jen.getSalary() << " annualy" << endl;
    
    person gianni("gianni", 150000);
       gianni.setName("gianni");
       gianni.setSalary(150000);
    
       cout << "person: " << gianni.getName() << " makes $" << gianni.getSalary() << " annualy" << endl;
    
    person jackson("jackson", 11000);
       jackson.setName("jackson");
       jackson.setSalary(11000);
       
       cout << "person: " << jackson.getName() << " makes $" << jackson.getSalary() <<" annually" << endl;
       
   
    
    return 0;
}
