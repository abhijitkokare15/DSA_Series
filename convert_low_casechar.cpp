  #include<iostream>
  using namespace std;

 int main()
 {
     cout<<"Enter the charcater to convert in lowercase:"<<endl;
     char ip;
     cin>>ip;
     if(ip>='a'|
        |ip<='z')
     {
      cout<<"Lowecase:"<<ip<<endl;
      exit(0);
        
     }
     cout<<"uppercase:"<<ip<<endl;
      ip = ip-'A'+'a';
      cout<<"Lowecase:"<<ip<<endl;
 }