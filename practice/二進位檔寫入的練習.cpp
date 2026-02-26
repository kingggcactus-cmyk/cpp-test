#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    double num;
    ofstream ofile("binary.dat", ios::binary);

    for(int i = 1; i <= 5; i++)
    {
        num = sqrt((double)i);
        ofile.write((char*)&num, sizeof(num));
    }
    cout << "已將資料寫入二進位檔了..." << endl;

    ofile.close();
    return 0;
}