#include<iostream>
using  namespace std;

long long int mySqrt(int x)
    { 
         int s=0;
         int e=x;
        long long  int mid=s+(e-s)/2;
         int ans=-1;

         while(s<=e)
         {
            long long int sqr=mid*mid;
            if(sqr==x)
            {
                return mid;
            }

            else if(sqr<x)
            {
                ans=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
             mid=s+(e-s)/2;
         }

    return ans;
    }

    double precision(int n,int pre,int temp)
    {
        double decimalp=1;
        double ans=temp;

        for(int i=0;i<3;i++)
        {
            decimalp=decimalp/10;
            for(double j =ans;j*j<n;j=j+decimalp)
            {
                ans=j;
            }
        }
        return ans;
    }





    int main()
    {
        int n;
        cin>>n;
        cout<<precision(n,3,mySqrt(n));
    }