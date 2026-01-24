#include <iostream>
using namespace std;

int main() 
{
    int n ;
    cout << "請輸入一個整數：";
    cin >> n;
         
    bool isPrime = true; 

    if (n <= 1)        
        isPrime = false; 
    else 
    {
        for (int i = 2; i < n; i++) 
        {
            if (n % i == 0) 
            {           
                isPrime = false;        
                break;                 
            }
        }
    }

    if (isPrime)                        
        cout << "此數是質數" << endl;
    else
        cout << "此數不是質數" << endl;

    return 0;                          
}



