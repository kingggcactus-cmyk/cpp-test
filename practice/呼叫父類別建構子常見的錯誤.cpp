#include <iostream>
#include <cstring>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(int w, int h):width(w), height(h)
      {
        cout << "Cwin(int w, int h)的建構子被呼叫了..." << endl;
        id = 'K';
      }
      Cwin()
      {
        cout << "沒有引數的Cwin建構子被呼叫了..." << endl;
      }
};

class CTextWin : public Cwin{
    private:
      char text[20];
    public:
      CTextWin(const char *tx)
      {
        cout << "CTextWin()建構子被呼叫了..." << endl;
        strcpy(text, tx);
      }
};

int main()
{
    CTextWin tx1("hello C++");
    return 0;
}