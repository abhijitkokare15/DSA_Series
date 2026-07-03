#include<iostream>
using namespace std;

void  reverse(string &s,int i,int j)
{
    cout<<"string is"<<":"<<s<<endl;
     // base condition
     if(i>j)
     {
        return ;

     }

     swap(s[i],s[j]);

   reverse(s,i+1,j-1);


}

int main()
{
    string s="abcde";

     reverse(s,0,s.length()-1);
     cout<<" Final reverse string  :"<<s;
}