#include <iostream>
#include <string>
using namespace std;
struct data{
    string name;
    int a, b;
};
void change(struct data *), prnstr(struct data);
int main()
{
    data first = {"David Young", 9, 2};
    prnstr(first);
    cout << "after process..." << endl;
    change(&first);
    prnstr(first);
    return 0;
}

void change(data *ptr)
{
    int temp;
    temp=ptr->a;
    ptr->a=ptr->b;
    ptr->b=temp;
    return;
}

void prnstr(data in)
{
    cout << "name= " << in.name << endl;
    cout << "a= " << in.a << "\t";
    cout << "b= " << in.b << endl;
    return;
}
