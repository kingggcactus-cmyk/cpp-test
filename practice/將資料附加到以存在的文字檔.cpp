#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ofstream afile("donkey.txt", ios::app);
    if(afile.is_open())
    {
        afile << "有一天我心血來潮騎著去趕集";
        cout << "已將字串附加到檔案..." << endl;
    }
    else
        cout << "檔案開啟失敗..." << endl;
        afile.close();
        return 0;

}