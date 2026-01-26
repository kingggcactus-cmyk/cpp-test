#include <iostream> 
#include <string>
using namespace std;
enum month{
    January, February, March,
    April, May, June } six;
    int main()
    {
        string a[6]={"January", "February", "March",
                     "April", "May", "June"};
        for(six=January; six<=June; six=static_cast<month>(six+1))
        cout << "six(" << six << ")=" << a[six] << endl;
        return 0;
    }