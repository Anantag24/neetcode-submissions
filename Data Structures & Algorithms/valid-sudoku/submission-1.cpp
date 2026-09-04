class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>rows(9);
        vector<unordered_set<char>>cols(9);
        vector<unordered_set<char>>boxes(9);
         for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
            if(board[i][j] == '.'){
                   continue;
              }
              int boxindex = (i/3)*3+(j/3);
            if(rows[i].find(board[i][j]) != rows[i].end()||
               cols[j].find(board[i][j]) != cols[j].end()||    
               boxes[boxindex].find(board[i][j]) != boxes[boxindex].end())  {
               return false;  
               }                                      
                 rows[i].insert(board[i][j]);
                  cols[j].insert(board[i][j]);
                   boxes[boxindex].insert(board[i][j]);
                                                           
            }
         }

return true;

    }
};
