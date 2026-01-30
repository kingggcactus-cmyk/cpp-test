#include <iostream>
#include <cstring>
using namespace std;
union mydata{
    char nationalid[20];
    char passportnum[20];
}student;

int main()
{
    char stutype;
    do{
        cout << "學生類型(1)本地學生 (2)國際學生: ";
        cin.get(stutype);
        cin.get();
    }while((stutype > '2') || (stutype < '1'));
    if(stutype == '1')
    {
        cout << "請輸入身分證字號: ";
        cin.getline(student.nationalid, 20);
    }else{
        cout << "請輸入護照號碼: ";
        cin.getline(student.passportnum, 20);
    }
    cout << "\n**** OUTPUT **** " << endl;
    if(stutype == '1')
    cout << "身分證字號: " << student.nationalid << endl;
    else
    cout << "護照號碼: " << student.passportnum << endl;
    return 0;
}