#include <iostream>
#include <string>
using namespace std;


int digitsum(int x)
{
int sum = 0;
while(x>0)
{
    sum += x%10;
    x /= 10;
}
return sum;
}

bool isPrime(int n)
{
   if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isPalindrone(int n)
{
    string s = to_string(n);
    int left = 0, right = s.size()-1;
    while(left < right)
    {
        if(s[left] != s[right])return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        long long ID;
        cout << "enter ID:";
        cin >> ID;

        int sum = digitsum(ID);
        bool prime = isPrime(sum);
        bool palindrone = isPalindrone(ID);

        if(prime && palindrone)
        {
            cout << "pass\n";
        }
        else 
        {
            cout << "fail\n";
        }
       
    }
    return 0;  
}


