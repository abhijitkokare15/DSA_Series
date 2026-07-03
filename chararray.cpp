  #include<iostream>
  using namespace std;
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

    cout<<"The length of string is:"<<getlength(name)<<endl;


  }