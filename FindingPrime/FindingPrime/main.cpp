#include <iostream>
using namespace std;

bool * FindingPrime (int n, bool prime[])

{
    
    int i, j, k;
    
    bool *p ;
    
    prime[0] = false;
    
    prime[1] = false;
    
    for ( k = 2 ; k <= n ; k++ )
        
        prime[k] = true;
    
    for ( i = 2 ; i <= n ; i++ )
    {
        
        if ( prime[i] == true)
            
        {
            for ( j = i + i ; j <= n ; j += i )
            {
                
                prime[j] = false;
                
            }
        }
        
    }
    
    p = prime;
    
    return p ;
    
}


int main()
{
    int n, m ;
    
    bool *p ;
    
    cin >> n;
    
    bool prime[n+1];
    
    p = FindingPrime(n, prime);
    
    for ( m = 2 ; m <= n ; m++ )
        
        if( prime[m] == true )
            
            cout << m << " ";
    
    cout << endl;
    
    return 0;
    
}
