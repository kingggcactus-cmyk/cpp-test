#include <iostream>
using namespace std;
namespace name1{
    int var = 5;
}
namespace name2{
    int var = 10;
}
using namespace std;
int main()
{
    cout << "in name1, var= " << name1::var << endl;
    cout << "in name2, var= " << name2::var << endl;
    return 0;
}