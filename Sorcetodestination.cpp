#include<iostream>
using namespace std;
void destinatin(int src,int des)
{
    if(src==des)
    {
        cout<<"I reach Destination"<<endl;
        return;

    }
    cout<<"Sourc:"<<src <<" "<<"destinatin:"<<des<<endl;
    src++;
    return destinatin(src,des);
}
int main()
{
    int src=1;
    int des=10;
    
    cout<<endl;
    
    destinatin(src,des);
}