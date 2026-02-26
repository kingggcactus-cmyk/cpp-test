#include <iostream>
#include <fstream>
using namespace std;
class Cstudent{
    protected:
      char name[40];
      int age;
    public:
      void get_data()
      {
        cout << "Enter name:"; cin.getline(name, 40);
        cout << "Enter age:"; cin >> age;
      }
      void show_data()
      {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
      }
};

int main()
{
    Cstudent st;
    st.get_data();

    ofstream ofile("student.dat", ios::binary);
    ofile.write((char*) &st, sizeof(st));
    cout << "資料已寫入檔案中..." << endl;
    ofile.close();
    return 0;
}