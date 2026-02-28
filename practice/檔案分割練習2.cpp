#include <iostream>
#include "Cwin.hpp"
#include "cminiwin.hpp"
using namespace std;
int main()
{
    Cwin win1('A', 50, 60);
    CMiniWin m_win('M', 40, 50);

    win1.show();
    m_win.show();
    return 0;
}