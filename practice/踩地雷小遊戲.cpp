#include <iostream>
using namespace std;

int main()
{
    int M = 4, N = 5;
    char map[100][100];
    int i, j;
    for(i = 0; i < M; i++)
    {
        for(j =0; j < N; j++)
        {
            cin >> map[i][j];
        }
    }

    for(i = 0; i < M; i++)
    {
        for(j =0; j < N; j++)
        {
            if(map[i][j] == '*') cout << "*" << " ";
            else
            {
                int count = 0;
                if(i - 1 >= 0 && j - 1 >= 0 && map[i-1][j-1] == '*') count++;
                if(i - 1 >= 0 && map[i-1][j] == '*') count++;
                if(i - 1 >= 0 && j+1 < N && map[i-1][j+1] == '*') count++;
                if(j-1 >= 0 && map[i][j-1] == '*') count++;
                if(j + 1 < N && map[i][j+1] == '*') count++;
                if(i + 1 < M && j - 1 >= 0 && map[i+1][j-1] == '*') count++;
                if(i + 1 < M && map[i+1][j] == '*') count++;
                if(i + 1 < M && j + 1 < N && map[i+1][j+1] == '*') count++;
                cout << count;
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}