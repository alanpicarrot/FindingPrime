//
//  main.cpp
//  FindingPrime
//
//  Created by Yu-hsiang Chang on 2017/6/23.
//  Copyright © 2017年 Yu-hsiang Chang. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j, k;
    
    cin >> n;
    
    bool prime[n+1];
    
    for( i = 0 ; i <= n ; i++)
        
        prime[i] = true;
    
    prime[0] = false;
    
    prime[1] = false;
    
    for(j = 2 ; j <= n ; j++)
    {
        
        if ( prime[j] == true)
        {
            for ( k = j + j ;  k <= n ; k += j )
                
                prime[k] = false;
            
        }
        
    }
    
    for ( m = 1 ; m <= n ; m++ )
    {
        if ( prime[m] == true )
            
            cout << m << " " ;
        
        else continue;
        
    }
    
    cout << endl ;
    
    return 0;
    
}
