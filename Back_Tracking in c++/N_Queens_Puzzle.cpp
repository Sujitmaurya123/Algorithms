#include<bits/stdc++.h>
using namespace std;

void addSol(vector<vector<int>> &board, vector<vector<int>> &ans, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}
bool isSafe(int row, int col, vector<vector<int>> &board, int n)
{
    int x = row;
    int y = col;
    // for same row
    while (y >= 0)
    {
        if (board[x][y] == 1)
            return false;
        y--;
    }
    // for diagonal
    x = row;
    y = col;
    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
            return false;
        y--;
        x--;
    }
    // for diagonal
    x = row;
    y = col;
    while (x < n && y >= 0)
    {
        if (board[x][y] == 1)
            return false;
        y--;
        x++;
    }
    return true;
}
void solve(int col, vector<vector<int>> &board, vector<vector<int>> &ans, int n)
{
    if (col == n)
    {
        addSol(board, ans, n);
        return;
    }
//solve 1 case and rest Recursion will take solve
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            //if placeing queen is safe
            board[row][col] = 1;
            solve(col + 1, board, ans, n);
            //backtrack
            board[row][col] = 0;

        }
    }
}
vector<vector<int>> nQueens(int n)
{
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<int>> ans;
    solve(0, board, ans, n);

    return ans;
}

int main(){
vector<vector<int>> sk = nQueens(4);

for(auto & sp:sk){
for(auto & s:sp){
    cout<<s<<" ";
}cout<<endl;

}cout<<endl;


    return 0;
}