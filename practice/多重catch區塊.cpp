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
    catch(const char *str)
    {
        cout << "捕捉到" << str << "例外..." << endl;
    }
    catch(int i)
    {
        cout << i << "的平方值超過60了" << endl;
    }
    return 0;
}