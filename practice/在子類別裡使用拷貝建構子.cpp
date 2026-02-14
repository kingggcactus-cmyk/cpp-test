#include <iostream>
#include <cstring>
using namespace std;
class Cwin{
    protected:
      char id;
    public:
      Cwin(char i = 'D'):id(i)
      {
        cout << "Cwin()建構子被呼叫了..." << endl;
      }
      Cwin(const Cwin &win)
      {
        cout << "Cwin()拷貝建構子被呼叫了..." << endl;
        id = win.id;
      }
      ~Cwin()
      {
        cout << "Cwin()解構子被呼叫了..." << endl;
      }
};

class CTextWin : public Cwin{
    private:
      char *text;
    public:
      CTextWin(char i, const char *tx):Cwin(i)
      {
        cout << "CTextWin()建構子被呼叫了..." << endl;
        text = new char[strlen(tx)+1];
        strcpy(text, tx);
      }
      CTextWin(const CTextWin &tx):Cwin(tx)
      {
        cout << "CtextWin()拷貝建構子被呼叫了..." << endl;
        text  = new char[strlen(tx.text)+1];
        strcpy(text, tx.text);
      }
      ~CTextWin()
      {
        delete [] text;
        cout << "CTextWin()解構子被呼叫了..." << endl;
      }
      void show_member()
      {
        cout << "window " << id << ": ";
        cout << "text = " << text << endl;
      }
      void set_member(char i, const char *tx)
      {
        id = i;
        delete [] text;
        text = new char[strlen(tx)+1];
        strcpy(text, tx);
      }
};

int main()
{
    CTextWin tx1('A', "Hello C++");
    CTextWin tx2(tx1);

    tx1.show_member();
    tx2.show_member();

    cout << "更改tx1物件的成員後..." << endl;
    tx1.set_member('B', "WElcome C++");

    tx1.show_member();
    tx2.show_member();
    return 0;
}