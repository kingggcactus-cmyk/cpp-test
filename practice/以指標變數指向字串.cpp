#include <iostream>
using namespace std;

int main()
{
    char name[20];
    const char *ptr = "How are you";
    cout << "what's your name:";
    cin.getline(name, 20);
    cout << "Hi, " << name << ", " << ptr << endl;
    return 0;
}