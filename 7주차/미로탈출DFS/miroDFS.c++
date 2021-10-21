#include<bits/stdc++.h>

using namespace std;

int n,m;
int graph[201][201];

// 이동할 네 가지 방향 정의 ( 상, 하 , 좌 우)
dx = [-1,1,0,0]
dy = [0,0,-1,1]

int main(void){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j ++){
            scanf("ld", &graph[i][j]);
        }
    }
    cout << dfs(0,0) << '\n';
    return
}

int bfs(int x, int y){
    stack<pair<int, int> > q;
    q.push({x,y});
    // 큐가 빌 때 까지 반복하기
    while(!q.emty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        // 현재 위치에서 4가지 방향으로의 위치 확인
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            //미로 찾기 공간을 벗어난 경우 무시
            if (nx <0 || nx >=n || ny < 0 || ny >= m)
            continue;
            
            //벽인 경우 무시
            if (graph[nx][ny] == 1){
                graph[nx][ny] = graph[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    // 가장 오른쪽 아래까지의 최단 거리 반환

    return graph[n - 1][m - 1];

}

