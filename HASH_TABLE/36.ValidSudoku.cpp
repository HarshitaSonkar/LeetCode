class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        *********for each row************
        for(int r = 0; r < board.size(); r++)
        {
            vector<int>row(10,0);
            for(int i = 0; i < board[0].size(); i++)
            {
                if('1' <= board[r][i] && board[r][i] <= '9')
                    row[board[r][i]-'0']++;
            }
            
            for(int i=1; i<10; i++)
            {
                if(row[i] > 1)
                    return false;
            }
        }
        
        ************for each column********************
        for(int c = 0; c < board[0].size(); c++)
        {
            vector<int> col(10,0);
            
            for(int i = 0; i < board.size(); i++)
            {
                if('1' <= board[i][c] && board[i][c] <= '9')
                    col[board[i][c]-'0']++;
            }
            
            for(int i=1; i<10; i++)
            {
                if(col[i] > 1)
                    return false;
            }
        }
        
        ***********for 3*3 cells *******************
        for(int i = 0; i < 9; i += 3)
        {
            for(int j = 0; j < 9; j += 3)
            {
                vector<int> cell(10,0);
                for(int k = i; k < i+3; k++)
                {
                    for(int l=j; l < j+3; l++)
                    {
                        if('1' <= board[k][l] && board[k][l] <= '9')
                            cell[board[k][l]-'0']++;
                    }
                }
                
                for(int i=1; i<10; i++)
                {
                    if(cell[i] > 1)
                        return false;
                }
            }
        }
        return true;
    }
};
