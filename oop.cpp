#include<iostream>
using namespace std;

class Acconut{
private:
    int pin=123456789;
public:
    string username;
    string bankname;
    
    void Enterdetails(int pin_pass,string usern,string bname)
    {
       if(pin_pass==pin)
       {
        cout<<"Enter user name and bank name:"<<endl;
        cin>>username>>bankname;



       }
        else{
            cout<<"Wrong details "<<endl;
        }
    
    }

};

int main()
{
    Acconut a;
    
    a.Enterdetails(123456789,"Abc","SBI");
}
