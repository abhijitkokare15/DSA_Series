#include<iostream>
using namespace std;
int main()
{
    char c;

    cout<<"enter the character :"<<endl;
    cin>>c;

    if(c>47 && c<58)
    {
        cout<<c<<" is a number";
    }

    else if(c>64 && c<91)  
    {
        cout<<c<<" is a uppercase";
    }

    else if(c>96 && c<123)  
        cout<<c<<" is a lowercase";
        else{
        cout<<c<<" is a special character";
    }
    }

    

