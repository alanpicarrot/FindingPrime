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

    int n, dividend, divisor, even, index;
    
    cin>>n;
    
    int prime[n+1];
    
    prime[1] = 0;
    prime[2] = 2;
    
    for(dividend = 3 ; dividend <= n ; dividend = dividend + 2 ){
        
        for( divisor = 2 ; divisor < dividend ; divisor++ )
            
            if(dividend % divisor == 0){
                
                prime[dividend] = 0;
                
                break;
            }
        
            else prime[dividend] = dividend;
    }
    
    for( even = 4 ; even <= n ; even = even + 2){
        
        prime[even] = 0;
    }
    
    for ( index = 1 ; index <= n ; index++){
        
        cout << prime[index] << " ";
        
    }
    
    cout << endl;
    
    return 0;
    
}
