#include <bits/stdc++.h>
using namespace std;
using Board = vector<vector<int>>;
// (f, (g, board))
using State = pair<int, pair<int, Board>>; 
const Board GOAL = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 0}
};
map<int, pair<int, int>> goalPos;
void goalMap() {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            goalPos[GOAL[i][j]] = {i, j};
        }
    }
}
int calculateManhattan(const Board &b) {
    int dist = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int val = b[i][j];
            if (val != 0)
                dist += abs(i - goalPos[val].first) + abs(j - goalPos[val].second);
        }
    }
    return dist;
}
pair<int, int> findBlank(const Board &b) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (b[i][j] == 0) return {i, j};
    return {-1, -1};
}
void solve8Puzzle(Board start) {
    priority_queue<State, vector<State>, greater<State>> pq;
    map<Board, int> visited;
    // map<Board, Board> parent;
    int h = calculateManhattan(start);
    pq.push({h, {0, start}});
    visited[start] = 0;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    while (!pq.empty()) {
        auto current = pq.top(); 
        pq.pop();
        int g = current.second.first;
        Board currentBoard = current.second.second;
        if (currentBoard == GOAL) {
            cout << "Goal reached with cost: " << g << endl;
            return;
        }
        auto [x, y] = findBlank(currentBoard);
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3) {
                Board nextBoard = currentBoard;
                swap(nextBoard[x][y], nextBoard[nx][ny]);
                int newG = g + 1;
                if (visited.find(nextBoard) == visited.end() || newG < visited[nextBoard]) {
                    visited[nextBoard] = newG;
                    int newH = calculateManhattan(nextBoard);
                    int newF = newG + newH;
                    pq.push({newF, {newG, nextBoard}});
                    // parent[nextBoard] = currentBoard;
                }
            }
        }
    }
    cout << "Unsolvable puzzle." << endl;
}
int main() {
    Board start = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 5, 8}
    };
    goalMap();
    cout << "Starting 8-Puzzle Solver..." << endl;
    solve8Puzzle(start);
    return 0;
}
