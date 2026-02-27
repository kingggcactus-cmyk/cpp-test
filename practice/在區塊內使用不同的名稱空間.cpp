#include <iostream>
namespace name1{
    int var = 5;
}
namespace name2{
    int var = 10;
}
using namespace std;
int main()
{
    {
        using namespace name1;
        cout << "in namespace name1:";
        cout << "var= " << var << endl;
    }
    {
        using namespace name2;
        cout << "in namespace name2:";
        cout << "var= " << var << endl;
        return 0;
    }
}