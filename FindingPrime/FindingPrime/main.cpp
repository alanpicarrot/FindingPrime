#include <iostream>
using namespace std;

bool * FindingPrime (int size)

{
    
    int i, j, k;
    
    bool* prime = new bool [size]; // 為一個布林陣列配置一個大小為size的記憶體空間。
    
    prime[0] = false;
    
    prime[1] = false;
    
    for ( k = 2 ; k <= size ; k++ )
        
        prime[k] = true;
    
    for ( i = 2 ; i <= size ; i++ )
    {
        
        if ( prime[i] == true)
            
        {
            for ( j = i + i ; j <= size ; j += i ) // 注意這裡的迴圈設計。
            {
                
                prime[j] = false;
                
            }
        }
        
    }
    
    return prime ;
    
}

void printArray(bool* prime, int size)
{
    int m;
    
    for(m = 1; m <= size ; m++)
    {
        
        if(prime[m] == true)
        cout << m << " " ;
        
    }
    
    cout << endl ;
    
}

int main()
{
    int size ;
    
    bool* prime;
    
    cin >> size;
    
    prime = FindingPrime(size);
    
    printArray(prime, size);
    
    return 0;
    
}
