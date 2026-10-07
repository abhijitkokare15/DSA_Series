#include <bits/stdc++.h> 

// rat ja sakata hai ki nahi
 
bool maiJau(int nx,int ny,vector<vector<bool>> &vis
,vector < vector < int >> & arr,int n)
{
    // tum ja sakate ho agar tum,

    if((nx>=0&& nx <n )&& (ny>=0 && ny< n) &&
    vis[nx][ny]!=1 && arr[nx][ny]!=0)

      return true;

    return false;
}

void ratPath(int x,int y,vector < vector < int >> & arr,int n,  vector<string> &ans,
string path,vector<vector<bool>> &vis)
{

   // rat poach gaya to 
    if(x==n-1 && y==n-1)
    {
        ans.push_back(path);
        return;
    }

    // current cell ko visited mark karo
    vis[x][y]=1;

    // down word

    if(maiJau(x+1,y,vis,arr,n))
    {
        ratPath(x+1,y,arr,n,ans,path+"D",vis);
    }

    // left word

    if(maiJau(x,y-1,vis,arr,n))
    {
        ratPath(x,y-1,arr,n,ans,path+"L",vis);
    }

    // right word

    if(maiJau(x,y+1,vis,arr,n))
    {
        ratPath(x,y+1,arr,n,ans,path+"R",vis);
    }
    
    //up word 

    if(maiJau(x-1,y,vis,arr,n))
    {
        ratPath(x-1,y,arr,n,ans,path+"U",vis);
    }

    // backtracking
    vis[x][y]=0;
}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
//answer wala array
    vector<string> ans;

    string path;

    if(arr[0][0]==0)
      return ans;


//visted wala array

vector<vector<bool>> vis(n,vector<bool>(n,0));

ratPath(0,0,arr,n,ans,path,vis);

return ans;
}