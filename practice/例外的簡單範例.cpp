#include <iostream>
using namespace std;
int main()
{
    int array[5];
    try{
        for(int i = 0; i <= 10; i++)
        {
            if(i>=5)
            throw "Index out of bound";
        else{
            array[i] = i*i;
            cout << "array[" << i << "]= " << array[i] << endl;
        }
    }
}
    catch(const char *str)
    {
        cout << "捕捉到" << str << "例外..." << endl;
    }
    return 0;
}