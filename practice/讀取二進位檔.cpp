#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream ifile("binary.dat", ios::binary);
    double num;

    for(int i = 1; i <= 5; i++)
    {
        ifile.read((char*)&num, sizeof(num));
        cout << num << endl;
    }
    cout << "二進位檔已被讀取了..." << endl;

    ifile.close();
    return 0;
}