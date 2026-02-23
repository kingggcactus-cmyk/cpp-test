#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char txt[80], ch;
    ifstream ifile1("welcome.txt", ios::in);
    ofstream ofile("welcome2.txt", ios::out);

    while(ifile1.get(ch))
    ofile.put(ch);
    cout << "拷貝完成..." << endl;
    ifile1.close();
    ofile.close();

    ifstream ifile2("welcome2.txt", ios::in);
    while(!ifile2.eof())
    {
        ifile2.getline(txt, 80, '\n');
        cout << txt << endl;
    }
    ifile2.close();
    return 0;
}