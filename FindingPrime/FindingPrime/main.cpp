//
//  main.cpp
//  FindingPrime
//
//  Created by Yu-hsiang Chang on 2017/6/23.
//  Copyright © 2017年 Yu-hsiang Chang. All rights reserved.
//

#include <iostream>
using namespace std;

bool FindingPrime (int n)

{
    bool prime[n+1];
    
    int i, j;
    
    prime[0] = false;
    
    prime[1] = false;
    
    prime[2] = true;
    
    for( i = 2 ; i <= n ; i++)
    {
        if ( prime[i] == true)
        {
            for ( j = 1 ; j <= n ; j = j * i )
            {
                
                prime[j] = false;
                
            }
        }
        
        if(prime[i] == false)
            
            continue;
        
    }
    
    return prime[n+1];
    
}


int main()
{
    int n, k ;
    
    cin >> n;
    
    bool prime[n+1];
    
    prime[n+1] = FindingPrime(n);
    
    for ( k = 1 ; k <= n ; k++ )
    {
        if ( prime[k] == true )
            
            cout << k << "" ;
        
        else continue;
        
    }
    
    cout << endl ;
    
    return 0;
    
}
