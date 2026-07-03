#include<iostream>
using namespace std;
int main()

{
    char ch [6]="hello";
   /* 
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;
    cout<<*ch<<endl;
    cout<<&ch[0]<<endl;
    cout<<&ch[1]<<endl;
    cout<<&ch[2]<<endl;
    cout<<&ch[3]<<endl;
    cout<<&ch[4]<<endl;
    cout<<&ch[5]<<endl;
    cout<<&ch[6]<<endl;
    cout<<&ch[7]<<endl;
    cout<<&ch[8]<<endl;
    cout<<&ch[9]<<endl;
    cout<<&ch[10]<<endl;
*/

    char *c=&ch[0];
    cout<<c<<endl;

    char c2 = '$';
    char* p = &c2;

    cout << c2 << endl;
    cout << p << endl;
}

