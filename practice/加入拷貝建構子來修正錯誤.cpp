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
        title = new char[strlen(win.title)+1];
        strcpy(title, win.title);
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

void display(Cwin win)
{
    win.show();
}

int main()
{
    Cwin *ptr1 = new Cwin('A', "Main window");
    display(*ptr1);
    display(*ptr1);
    delete ptr1;
    return 0;
}