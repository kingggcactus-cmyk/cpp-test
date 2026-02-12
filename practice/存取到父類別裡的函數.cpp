#include <iostream>
#include <cstring>
using namespace std;
class Cwin{
    private:
      char id;
    public:
      Cwin(char i):id(i){}
      char get_id()
      {
        return id;
      }
};

class CTextWin : public Cwin{
    private:
      char text[20];
    public:
      CTextWin(char i, const char *tx):Cwin(i)
      {
        strcpy(text, tx);
      }
      void show()
      {
        cout << "window" << get_id() << ": ";
        cout << "text= " << text << endl;
      }
};

int main()
{
    CTextWin txt('A',"hello C++");
    txt.show();
    return 0;
}