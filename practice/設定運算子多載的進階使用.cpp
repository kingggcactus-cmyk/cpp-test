#include <iostream>
#include <cstring>
using namespace std;
class Cwin{
    private:
      char id;
      int width, height;
    public:
      Cwin(char i = 'D', int w = 10, int h = 10):id(i), width(w), height(h)
      {
        cout << "Cwin()建構子被呼叫了..." << endl;
      }
      Cwin(int w, int h):width(w), height(h)
      {
        cout << "Cwin(int w, int h)建構子被呼叫了..." << endl;
        id = 'K';
      }
      void show_member(void)
      {
        cout << "window " << id << ": ";
        cout << "width= " << width << ", height= " << height << endl;
      }
};

class CTextWin : public Cwin{
    private:
      char text[20];
    public:
      CTextWin(int w, int h):Cwin(w, h)
      {
        cout << "CTextWin(int w, int h)建構子被呼叫了..." << endl;
        strcpy(text, "Have a good night");
      }
      CTextWin(const char *tx)
      {
        cout << "CTextWin()建構子被呼叫了..." << endl;
        strcpy(text, tx);
      }
      void show_text()
      {
        cout << "text = " << text << endl;
      }
};

int main()
{
    CTextWin tx1("Hello C++");
    CTextWin tx2(60, 70);

    tx1.show_member();
    tx1.show_text();

    tx2.show_member();
    tx2.show_text();
    return 0;
}