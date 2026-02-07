#include <iostream>
#include <string>
using namespace std;
class Cwin{
    private:
      char id, *title;
    public:
      Cwin(char i = 'D', const char *text = "Default window"):id(i)
      {
        cout << "建構子被呼叫了..." << endl;
        title = new char[strlen(text)+1];
        strcpy(title, text);
      }
      Cwin(const Cwin &win)
      {
        cout << "拷貝建構子被呼叫了..." << endl;
        id = win.id;
        title = win.title;
      }
      ~Cwin()
      {
        delete [] title;
      }
      void show()
      {
        cout << "window " << id << ": " << title << endl;
      }
};

int main()
{
    Cwin *ptr1 = new Cwin('A', "Main window");
    Cwin *ptr2 = new Cwin(*ptr1);
    ptr1->show();
    ptr2->show();
    delete ptr1;
    cout << "將ptr1所指向的物件刪除後..." << endl;
    ptr2->show();

    delete ptr2;
    return 0;

}