#include<iostream>
using namespace std;

int main()
{
    int num=1;
    char ch ='A';

    switch(ch)
    {
        case 'A':
                switch(num)
                {
                    case 1:
                         cout<<"Hello"<<endl;
                         break;
                    default:
                     cout<<"Hello2"<<endl;
                         break;
                        
                }
                break;
        default:
           cout<<"no switch" <<endl;
                         break;
    }
}