#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ofstream ofile("donkey.txt");
    if(ofile.is_open())
    {
        ofile << "我有一隻小毛驢" << endl;
        ofile << "我從來也不騎" << endl;
        cout << "已將字串寫入檔案..." << endl;
    }
    else
        cout << "檔案開啟失敗..." << endl;

        ofile.close();
        return 0;
}