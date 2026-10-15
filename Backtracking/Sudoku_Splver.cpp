class Solution {
public:

     bool issafe(int row,int col,char sol,vector<vector<char>>& board,int  n)
     {

        for(int i=0;i<n;i++)
        {
            // row chk karo 

            if(board[row][i]==sol)
              return false;

              // col chk karo 
            if(board[i][col]==sol)
               return false;
        

         if(board[3*(row/3)+i/3][3*(col/3)+i%3]==sol)
            return  false;

        }

        return true;
     }

     bool  solve(vector<vector<char>>& board)
     {
           int n = board[0].size();

           for(int i=0;i<n;i++)
           {
            for(int j=0;j<n;j++)
            { 
                   // empty space hai 
                   if(board[i][j]=='.')
                   {
                     for(char sol='1';sol<='9';sol++)
                     {
                           // mai safe hoo
                           if(issafe(i,j,sol,board,n))
                           {
                                board[i][j]=sol;

                                // recursive call maro

                               bool aggePossible= solve(board);
                               if(aggePossible)
                                 return true;

                                // backtrack
                                else

                                
                                    board[i][j]='.';
                                
                           }

                     }

                     return false;
                                  
                   }

                     }

                   }

                   return true;
                 
            }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};