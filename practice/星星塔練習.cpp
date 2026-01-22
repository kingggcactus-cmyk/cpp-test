#include <iostream>
using namespace std;

int main(){

    string E[5] = {
        "*****",
        "*    ",
        "***  ",
        "*    ",
        "*****"
    };

    string R[5] = {
        "**** ",
        "*   *",
        "**** ",
        "*  * ",
        "*   *"
    };

    string I[5] = {
        "*****",
        "  *  ",
        "  *  ",
        "  *  ",
        "*****"
    };

    string C[5] = {
        " ****",
        "*    ",
        "*    ",
        "*    ",
        " ****"
    };

    // 一列一列印
    for(int i=0;i<5;i++){
        cout << E[i] << "  "
             << R[i] << "  "
             << I[i] << "  "
             << C[i] << endl;
    }

    return 0;
}
