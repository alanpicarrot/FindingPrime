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

    int n, i, j, k, m;
    
    cin>>n;
    
    int prime[n+1];
    
    prime[1] = 0;
    prime[2] = 2;
    
    for(i = 3 ; i <= n ; i = i + 2 ){
        
        for( j = 2 ; j < i ; j++ )
            
            if(i % j == 0){
                prime[i] = 0;
                break;
            }
        
            else prime[i] = i;
    }
    
    for( m = 4 ; m <= n ; m = m + 2){
        
        prime[m] = 0;
    }
    
    for ( k = 1 ; k <= n ; k++){
        
        cout << prime[k] << " ";
        
    }
    
    cout << endl;
    
    return 0;
    
}
