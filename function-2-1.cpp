//
//  function-1-1.cpp
//  
//
//  Created by Sam Sentschuk on 31/3/22.
//

#include <iostream>
#include <string>
using namespace std;


string get_phase(int temp){
    
    string resp;
    
    if (temp <=273) {
        resp = "ice";
    }
    
    if (temp > 273 && temp <= 373) {
        resp = "liquid";
    }
    
    if (temp > 373 && temp <= 4700) {
        resp = "gas";
    }
    if (temp > 4700) {
        resp = "decomposed";
    }
    
   
    
    
    
    
    
    
    return resp;
}
