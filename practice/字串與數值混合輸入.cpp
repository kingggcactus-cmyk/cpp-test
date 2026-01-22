#include <iostream>
using namespace std;

int main()
{
    int age;
    char name[20];
    cout << "How old are you?";
    cin >> age;
    cin.get();
    cout << "what's your name?";
    cin.getline(name, 20);
    cout << name << " " << "is" << " " << age << " " << "years old";
    return 0;
}