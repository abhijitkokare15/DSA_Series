  #include<iostream>
  using namespace std;

  void revrese(char name[],int n);
  {
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }

    cout<<name;
  }
int getlength(char name[])
{
    int count=0;
    for( int i=0;name[i]!='\0';i++)
    {
        count++;

    }
    return count;
}
  int main()
  {
    char name[10];
    cout<<"Enter the string:"<<endl;
    cin>>name;
   // name[2]='\0';
    cout<<"Name:"<<name<<endl;
    int len =getlength(name);

    cout<<"The length of string is:"<len<<endl;
    
    cout<<"the reverse of string is:"<<revrese(name,len);


  }