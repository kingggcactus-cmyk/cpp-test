#include <iostream>
using namespace std;
int main()
{
    enum mykey{
    left, right, middle
} mouse;
    int key;
    do{
        cout << "Buttom press?(0)Left (1)Right (2)Middle: ";
        cin >> key;
    }while((key > middle)|| (key < left));
    mouse = mykey(key);
    switch(mouse){
        case left: cout << "Left buttom pressed!" << endl;
        break;
        case right: cout << "Right buttom pressed!" << endl;
        break;
        case middle: cout << "Middle buttom pressed!" << endl;
        }
        return 0;
}