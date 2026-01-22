#include <iostream>
using namespace std;

int digitalSum(int ID)
{
    int sum = 0;
    while(ID>0)
    {
        sum += ID%10;
        ID /= 10;
    }
    return sum;
}
bool isPrime(int x)
{
   if(x<2)return false;
   for(int i = 2; i * i <= x; i++)
   {
    if(x%i==0)return false;
   }
   return true;
}
bool isPolindrone(int x)
{
    int original = x;
    int reverse = 0;
    while(x>0)
    {
        reverse = reverse*10 + x%10;
        x /= 10;
    }
    return original == reverse;
}

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        int ID;
        cin >> ID;
        int sum = digitalSum(ID);
        if(isPrime(sum) && isPolindrone(ID)) 
    {
        cout << "pass\n";
    }
    else cout << "failed\n";
    }
    return 0;
}