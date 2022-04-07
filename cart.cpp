//
//  cart.cpp
//  
//
//  Created by Sam Sentschuk on 6/4/22.
//

#include "cart.h"
#include "meerkat.h"
#include <string>
#include <iostream>


using namespace std;

cart::cart(){
    
    meerkat e; // empty seats
    
    s1=e;
    s2=e;
    s3=e;
    s4=e;
    s5=e;
    
    return;
    
}
bool cart::addMeerkat(meerkat cat){
    
    meerkat e;
    
    if(s1.getAge()==0 && s1.getName() == "n/a")
    {
        s1 = cat;
        return true;
    } else if(s2.getAge()==0 && s2.getName() == "n/a")
    {
        s2 = cat;
    return true;
    }
} else if(s3.getAge()==0 && s3.getName() == "n/a")
{
    s3 = cat;
return true;
}
} else if(s4.getAge()==0 && s4.getName() == "n/a")
{
    s4 = cat;
return true;
}
} else if(s5.getAge()==0 && s5.getName() == "n/a")
{
    s5 = cat;
return true;
}
else{
    
return false;
    
}
}

void cart::emptyCart(){
    
    meerkat e; // empty seats
    
    s1=e;
    s2=e;
    s3=e;
    s4=e;
    s5=e;
    
    return;
}

void cart::printMeerkats(){
    
    cout<<s1.getName()<<" "<< s1.getAge()<<endl;
    cout<<s2.getName()<<" "<< s1.getAge()<<endl;
    cout<<s3.getName()<<" "<< s1.getAge()<<endl;
    cout<<s4.getName()<<" "<< s1.getAge()<<endl;
    cout<<s5.getName()<<" "<< s1.getAge()<<endl;
    
    
}
