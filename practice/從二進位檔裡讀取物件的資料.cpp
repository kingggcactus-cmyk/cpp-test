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
        cout << "Enter Name: " << endl; cin.getline(name, 40);
        cout << "Enter Age: " << endl; cin >> age;
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
    ifstream ifile("student.dat", ios::binary);

    ifile.read((char*) &st, sizeof(st));
    st.show_data();
    ifile.close();
    return 0;
}