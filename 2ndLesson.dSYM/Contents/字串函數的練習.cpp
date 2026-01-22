#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "TingKai";
    string str2 = "Wang";
    string str3 = "2007/01/17";
    cout << "str1=" << str1 << ", str2=" << str2;
    cout << ", str3=" << str3 << endl;
    cout << "full name=" << str1+" "+str2 << endl;
    cout << "execute str1.append(str2)" << endl;
    str1.append(str2);
    cout << "str1=" << str1 << endl;
    cout << "execute str1.append(str3, 0, 6)" << endl;
    str1.append(str3, 0, 6);
    cout << "str1=" << str1 << endl;
    cout << "take string after str1's fifth word--> ";
    cout << str1.substr(5) << endl;
    cout << "str1's length=" << str1.length() << endl;
    return 0;
    
}