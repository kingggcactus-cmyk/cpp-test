#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum;
    string proverb;
    cout << "輸入欲重複的數:";
    (cin >> sum).get();
    cout << "輸入欲列印的字串:";
    getline(cin, proverb);
    for(int i = 0; i < sum; i++) cout << proverb << endl;
    return 0;

}