#include <iostream>
using namespace std;

int H, W;
int grid[20][20];      // 地圖，0=海洋，1=陸地

// 四個方向：下、上、右、左
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

// DFS 遞迴函式：淹掉與 (x,y) 相連的陸地
void dfs(int x, int y) {
    grid[x][y] = 0;  // 把這格淹掉，避免重複計算

    for (int k = 0; k < 4; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];

        // 邊界檢查 + 陸地檢查
        if (nx >= 0 && nx < H && ny >= 0 && ny < W) {
            if (grid[nx][ny] == 1) {
                dfs(nx, ny);  // 遞迴處理相連的陸地
            }
        }
    }
}

int main() {
    cin >> H >> W;  // 輸入高度與寬度

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];  // 輸入地圖
        }
    }

    int islands = 0;  // 記錄島嶼數量

    // 掃描整張地圖
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == 1) {  // 找到一座未處理的島
                islands++;           // 島嶼數 +1
                dfs(i, j);           // 淹掉整座島
            }
        }
    }

    cout << islands << endl;  // 輸出結果
    return 0;
}
