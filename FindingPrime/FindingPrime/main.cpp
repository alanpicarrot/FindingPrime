//
//  main.cpp
//  FindingPrime
//
//  Created by Yu-hsiang Chang on 2017/6/23.
//  Copyright © 2017年 Yu-hsiang Chang. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {

    int n, dividend, divisor, i, index = 3;
    
    cin>>n;
    
    int prime[n+1];
    
    prime[2] = 2;
    
    for(dividend = 3 ; dividend <= n ; dividend = dividend + 2){
        
        for( divisor = 2 ; divisor < dividend ; divisor++ ){
            
            
            if (divisor == dividend - 1){
                
                prime[index] = dividend;
                index++;
            }
            
            else if(dividend % divisor == 0)
                
                break;
            
            else if(dividend % divisor != 0)
                
                continue;
                
        }
        
        
        
    }

    
    for ( i = 2 ; i < index ; i++){
        
        cout << prime[i] << " ";
    
    }
    
    cout << endl;
    
    return 0;
    
}
