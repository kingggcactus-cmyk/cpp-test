#include <iostream>
#include <cstring>
using namespace std;
char *setstring(const char *);

int main()
{
    char *str;
    str = setstring("Hello, C++");
    cout << str << endl;
    delete[] str;
    str = nullptr;
    return 0;
}

char *setstring(const char *text)
{
    char *ptr;
    ptr = new char[strlen(text)+1];
    strcpy(ptr, text);
    return ptr;
}