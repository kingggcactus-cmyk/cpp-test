#include <iostream>
using namespace std;
#define max 5

int main()
{
    int score[max], num, i = 0;
    float sum;
    cout << "enter 0 stopping input" << endl;
    do{
        if(i==max)
        {
            cout << "no more space." << endl;
            i++;
            break;
        }
        cout << "input score:";
        cin >> score[i];
    }while(score[i++]>0);
    num = i-1;
    for(i=0; i<num; i++)
    sum += score[i];
    cout << "average of all is" << " " << sum/num << endl;
    return 0;
}