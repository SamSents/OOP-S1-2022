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
    tom.setname("tom");
    tom.setsalary(20000);
    
    cout << "person: " << tom.getname() << " makes $" << tom.getsalary() << " annually" << endl;
    
    person jen("jen", 3000000);
       jen.setname("jen");
       jen.setsalary(3000000);
       
       cout << "person: " << jen.getname() << " makes $" << jen.getsalary() << " annualy" << endl;
    
    person gianni("gianni", 150000);
       gianni.setname("gianni");
       gianni.setsalary(150000);
    
       cout << "person: " << gianni.getname() << " makes $" << gianni.getsalary() << " annualy" << endl;
    
    person jackson("jackson", 11000);
       jackson.setname("jackson");
       jackson.setsalary(11000);
       
       cout << "person: " << jackson.getname() << " makes $" << jackson.getsalary() <<" annually" << endl;
       
   
    
    return 0;
}
