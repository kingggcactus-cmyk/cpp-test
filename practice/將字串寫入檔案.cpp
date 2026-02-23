#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    char txt[]="Welcome to the C++ world";
    int i = 0;
    ofstream ofile("welcome.txt", ios::out);

    while(txt[i] != '\0')
    {
        ofile.put(txt[i]);
        i++;
    }
    cout << "字串寫入完成..." << endl;
    ofile.close();
    return 0;
}