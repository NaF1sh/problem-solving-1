#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

// Directions for right, left, up, down
const vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

// Function to check if a cell is within bounds and is valid to move
bool isValid(int x, int y, int N, int M, const vector<vector<char>> &maze, vector<vector<bool>> &visited)
{
    return x >= 0 && x < N && y >= 0 && y < M && maze[x][y] != '#' && !visited[x][y];
}

void solveMaze(int N, int M, vector<vector<char>> &maze)
{
    // Find the starting position ('R' instead of 'S')
    int startX = -1, startY = -1;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (maze[i][j] == 'R')
            { // Use 'R' as the starting point
                startX = i;
                startY = j;
                break;
            }
        }
        if (startX != -1)
            break;
    }

    if (startX == -1 || startY == -1)
    {
        cout << "Error: Maze has no starting point 'R'.\n";
        return;
    }

    // BFS setup
    queue<tuple<int, int, vector<pair<int, int>>>> q; // (x, y, path)
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    q.push({startX, startY, {}});
    visited[startX][startY] = true;

    while (!q.empty())
    {
        auto [x, y, path] = q.front();
        q.pop();

        // Mark the current cell on the path
        path.push_back({x, y});

        // If the goal ('D') is reached
        if (maze[x][y] == 'D')
        {
            for (auto [px, py] : path)
            {
                if (maze[px][py] != 'R' && maze[px][py] != 'D')
                {
                    maze[px][py] = 'X';
                }
            }
            return;
        }

        // Explore all possible directions
        for (auto [dx, dy] : directions)
        {
            int newX = x + dx;
            int newY = y + dy;

            if (isValid(newX, newY, N, M, maze, visited))
            {
                visited[newX][newY] = true;
                q.push({newX, newY, path});
            }
        }
    }
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<char>> maze(N, vector<char>(M));

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> maze[i][j];
        }
    }

    solveMaze(N, M, maze);

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }

    return 0;
}
