//
//  function2-3.cpp
//  
//
//  Created by Sam Sentschuk on 4/3/22.
//

#include <iostream>
#include <stdlib.h>

using namespace std;
void twofivenine(int array[], int n)
{

    int sum2 =0;
    int sum5 =0;
    int sum9 =0;

    
    for(int i=0; i<n; i++) {
       
        switch(array[i]) {
          case 2:

                sum2++;
                
            break;
          case 5 :
        
                sum5++;
                
                
            break;
            case 9 :
        
                sum9++;
                
              break;
    
            
        }
        
    }
    


std::cout << "2;" << sum2; < "5;" << sum5; < "9;" << sum9 << std::endl;

    
  
    

    return ;

}
