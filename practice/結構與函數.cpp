#include <iostream>
#include <string>
using namespace std;

struct mydata{
    string name;
    int age;
};
void func(mydata);
int main()
{
    mydata woman={"Mary Wu", 5};
    cout << "before process..." << endl;
    cout << "In main(), " << woman.name << " ";
    cout << "is" << " " << woman.age << " year's old" << endl;
    cout << "after process..." << endl;
    func(woman);
    cout << "In main()," << woman.name << " ";
    cout << "is" << " " << woman.age << " year's old" << endl;
    return 0;
}

void func(mydata a)
{
    a.age += 10;
    cout << "In func()," << a.name << " ";
    cout << "is" << " " << a.age << " years old" << endl;
    return;
}