#include <iostream>
#include <string>
using namespace std;
struct event{
    string event_name;
    int month, date, hour;
};

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    cout << "[活動清單]" << endl;
    event e[10];
    for(int i = 0; i < n; i++)
    {
        cin >> e[i].event_name;
        cin >> e[i].month >> e[i].date >> e[i].hour;
        cout << e[i].event_name << " " << e[i].month << " 月 " << e[i].date << " 日 " 
        << e[i].hour << " 小時 " << endl;
        sum += e[i].hour;
    }
    cout << "總時數：" << sum << " 小時" << endl;

    cout << "查詢月份：";
    int query_month;
    cin >> query_month;
    cout << "--- " << query_month << " 月份的活動如下: " << " ---" << endl;

    for(int i = 0; i < n; i++)
    {
        if(e[i].month == query_month)
        {
            cout << "- " << e[i].event_name << " " << e[i].month << " 月 " << e[i].date << " 日 " 
            << e[i].hour << " 小時 " << endl;
        }
    }
    return 0;
}