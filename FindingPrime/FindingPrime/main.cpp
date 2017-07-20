#include <iostream>
using namespace std;

void FindingPrime (int n, bool prime[])

{
    
    int i, j, k, m ;
    
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
    
    for ( m = 2 ; m <= n ; m++ )
        
        if( prime[m] == true )
            
            cout << m << " ";
    
}


int main()
{
    int n ;
    
    cin >> n;
    
    bool prime[n+1];
    
    FindingPrime(n, prime);
    
    cout << endl;
    
    return 0;
    
}
