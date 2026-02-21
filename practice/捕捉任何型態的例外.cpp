#include <iostream>
using namespace std;
int main()
{
    int array[10];
    try{
        for(int i = 0; i <= 10; i++)
        {
            if(i>9) throw "Index out of bound";
            if(i*i>60) throw i;
        else array[i] = i*i;
    }
}
    catch(...)
    {
        cout << "捕捉到例外了..." << endl;
    }
    return 0;
}