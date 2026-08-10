class Solution {
public:

bool dfs(vector<vector<char>>& board, int i ,int j, string& word, int index){

    if(index==word.length()){
        return true;
    }

    // corner case

    if(i<0|| j<0|| i>=board.size() || j>= board[0].size()||board[i][j]!=word[index]) {
        return false;
    }

    char temp = board[i][j];
    board[i][j]='#';

    bool result = dfs(board,i-1,j,word, index+1)||  //up
                  dfs(board,i,j+1,word,index+1)|| //left
                  dfs(board,i+1,j,word,index+1)|| //right
                  dfs(board,i,j-1,word,index+1);
    board[i][j]= temp;
    return result;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n =board.size();
        int m =board[0].size();
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(board[i][j] == word[0]){
                    if(dfs(board,i,j,word,0)){
                    return true;
                    }

                }
            }
    }
    return false;
            
        }
        
    
};