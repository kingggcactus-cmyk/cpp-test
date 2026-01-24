#include <iostream>
#include <cstring>
using namespace std;
union mydata{
    char nationalID[20];
    long passportNUM;
}student;

int main()
{
    char stutype;
    do{
        cout << "學生類型(1)本地學生(2)國際學生";
        cin.get(stutype);
        cin.get();
    }while((stutype > '2') || (stutype < '1'));
    if(stutype == '1')
    {
        cout << "請輸入身分證字號:";
        cin.getline(student.nationalID, 20);
    }else{
    
        cout << "請輸入護照號碼:";
        cin >> student.passportNUM;
    }
    cout << "\n**** OUTPUT ****" << endl;
    if(stutype == '1')
    cout << "身分證字號＝" << student.nationalID << endl;
    else
    cout << "護照號碼=" << student.passportNUM << endl;
    return 0;
}