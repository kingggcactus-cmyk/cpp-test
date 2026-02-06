#include <iostream>
#include <string>
using namespace std;
class Cwin{
    private:
      char id, *title;
    public:
      Cwin(char i = 'D', const char *text = "Default window"):id(i)
      {
        title = new char[strlen(text)+1];
        strcpy(title, text);
      }
      ~Cwin()
      {
        cout << "解構子被呼叫了, win " << this->id << "被銷毀了..." << endl;
        delete [] title;
        system("pause");
      }
      void show()
      {
        cout << "window " << id << ": " << title << endl;
      }
};

int main()
{
    Cwin win1('A', "Main window");
    Cwin *ptr;
    ptr = new Cwin('B');
    win1.show();
    ptr->show();
    delete ptr;
    return 0;

}