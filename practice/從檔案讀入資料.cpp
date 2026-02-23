#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    char txt[40];
    ifstream ifile("donkey.txt", ios::in);
    while(!ifile.eof()) //用來測試是否讀到末端
    {
        ifile >> txt;
        cout << txt << endl;
    }
    ifile.close();
    return 0;
}