//
//  main-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 5/4/22.
//
#include <iostream>
#include "meerkat.h"
#include <string>


using namespace std;
// main program
int main()
{
    meerkat tom;
    tom.setName("tom");
    tom.setAge(2);
    
    cout << "meerkat: " << tom.getName() << " is " << tom.getAge() << endl;
    
    meerkat tom2;
    tom2.setName("tom two");
    tom2.setAge(5);
    
    cout << "meerkat: " << tom2.getName() << " is " << tom2.getAge() << endl;
    
    meerkat jerry;
    jerry.setName("jez");
    jerry.setAge(7);
    
    cout << "meerkat: " << jerry.getName() << " is " << jerry.getAge() << endl;
    
    
    meerkat jerry2;
    jerry2.setName("jez two");
    jerry2.setAge(5);

    
    cout << "meerkat: " << jerry2.getName() << " is " << jerry2.getAge() << endl;
    
    return 0;
}
