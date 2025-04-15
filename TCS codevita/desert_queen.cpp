#include <bits/stdc++.h>
using namespace std;

int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};



bool isCellValid(int row, int col, int gridSize, const vector<vector<char>>& matrix) {
    return row >= 0 && row < gridSize && col >= 0 && col < gridSize && matrix[row][col] != 'M';
}



int findMinCost(int gridSize, const vector<vector<char>>& matrix, pair<int, int> start, pair<int, int> end) {
    vector<vector<int>> costMatrix(gridSize, vector<int>(gridSize, INT_MAX));
    queue<pair<int, int>> bfsQueue; 


    bfsQueue.push(start);
    costMatrix[start.first][start.second] = 0;


    while (!bfsQueue.empty()) {
        auto [currentRow, currentCol] = bfsQueue.front();
        bfsQueue.pop();

  

        for (int i = 0; i < 4; i++) {
            int nextRow = currentRow + directions[i][0];
            int nextCol = currentCol + directions[i][1];

            if (isCellValid(nextRow, nextCol, gridSize, matrix)) {
                int transitionCost = (matrix[currentRow][currentCol] == 'T' && matrix[nextRow][nextCol] == 'T') ? 0 : 1;
                if (costMatrix[currentRow][currentCol] + transitionCost < costMatrix[nextRow][nextCol]) {
                    costMatrix[nextRow][nextCol] = costMatrix[currentRow][currentCol] + transitionCost;
                    bfsQueue.push({nextRow, nextCol});
                }
            }
        }
    }
    return costMatrix[end.first][end.second];
}

int main() {
    int gridSize;
    cin >> gridSize;

    vector<vector<char>> matrix(gridSize, vector<char>(gridSize));
    pair<int, int> start, end;

    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 'S') start = {i, j};
            if (matrix[i][j] == 'E') end = {i, j};
        }
    }

    int result = findMinCost(gridSize, matrix, start, end);
    cout << result;

    return 0;
}
