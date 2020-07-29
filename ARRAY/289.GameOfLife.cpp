class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
    
        if(board.empty()) return;
        
        int m = board.size();
        int n = board[0].size();
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                check(board, i, j, i+1, j-1);
                check(board, i, j, i+1, j);
                check(board, i, j, i+1, j+1);
                check(board, i, j, i, j+1);
                if(board[i][j] >= 5 && board[i][j] <=7)
                    board[i][j] = 1;
                else
                    board[i][j] = 0;
            }
        }
    }
private:
    void check(vector<vector<int>>& board, int i, int j, int a, int b) {
        int m = board.size();
        int n = board[0].size();
        
        if(a >= m || b < 0 || b >= n) 
            return;
        
        if(board[i][j] % 2 != 0) 
            board[a][b]+=2;
        if(board[a][b]% 2 != 0) 
            board[i][j]+=2;
    } 
};
/*First this solution does not involve bit-manipulation and only involves addition of integers.

The idea is to go through the matrix from top-left corner to the bottom-right corner, and check only 4 cells
("accumulate" scores "for both cells" if the other cell is originally a 1). Graphically speaking, it is like this:

O O O 
O @ X
X X X
where the @ cell is the one that you are working on, 0 cells are those you have gone through (don't work on them again!),
and the X cells are those you have not gone through and should work on. For example, if one X cell is originally a 1, you should add C (a constant) to @ cell, 
and simultaneously if @ cell is originally a 1, you add C to that X cell.

The constant C can be 2. If it is 2 then when you will find that after done working on the current cell if it's value is 5 or 7 
(cell @ is originally a 1 and have 2 or 3 neighbours) or 6 (cell @ is originally a 0 and have 3 neighbours), then you should reset it to be 1 (live), 
otherwise reset it to be zero (dead). And when accumulating scores, you know a cell is originally a 1 if it has odd-numbered score, 
and it is originally a 0 if it has even-numbered score.          */
