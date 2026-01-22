#include <iostream>
using namespace std;


    bool isPolindrone(long long n)
    {
    long long original = n;
    long long rev = 0;

    while(n>0)
    {
       rev = rev*10 + (n%10);
       n /= 10;
    }
    return original == rev; 
    }

    int reverseNumber(long long n)
    {
        long long rev = 0;
        while(n>0)
        {
            rev = rev*10 + (n%10);
            n /= 10;
        }

        return rev;
    }
    int main()
    {
        long long N;
        cin >> N;

    if(isPolindrone(N))
    {
    cout << 0 << " " << N << endl;
    return 0;
    }
    int count = 0;
    while(count<10)
    {
        long long rev = reverseNumber(N);
        N = N + rev;
        count++;
    }

    if(isPolindrone(N))
    {
    cout << count << " " << N << endl;
    return 0;

    }
    cout << "failed" << endl;

    return 0;
    }

