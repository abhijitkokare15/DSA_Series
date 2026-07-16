#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Heap
{
    public:
    int arr[100];
    int size;
    
    Heap()
    {
         size=0;
        arr[1]=0;
    }

    void insert(int val)
    {
       size=size+1;
       int index=size;
       arr[index]=val;

       while(index > 1)
       {
         int parent = index/2;
         if(arr[parent] < arr[index])
         {
            swap(arr[parent],arr[index]);
            index=parent;
         }
         else
         {
            return;
         }
       }

    }

    void print()
    {
        for(int i=1;i<=size;i++)
         cout<<arr[i]<<" ";

    }


    void deleteHeap()
    {
        if(size==0)
        {
         cout<<"Nothing to delete"<<endl;
         return;
        }


         // 1st step
         arr[1]=arr[size];
         
     // 2nd step
         size--;

    // 3rd step 
     int i=1;
     
       while(i <= size)
       {
        int left = i*2;
        int right =(i*2)+1;

        if(left <= size && arr[i] < arr[left])
          {
            swap(arr[i],arr[left]);
            i=left;
          }

           else  if(right <= size && arr[i] < arr[right])
          {
            swap(arr[i],arr[right]);
            i=right;
          }

          else{
              return ;
          }



       }

    }

    void Heapfy(int arr[],int n,int i)
    {
        int lar=i;
        int left=2*i;
        int right=2*i+1;

        if(left <=n  &&  arr[lar] < arr[left] )
          lar=left;
        
           if(right<=n  &&  arr[lar] < arr[right] )
                lar=right;

        
                if(lar!=i)
                {
                    swap(arr[lar],arr[i] );
                    Heapfy(arr,n,lar);
                }
    }

   void heapsort(int arr[],int size)
   {
       while(size > 1)
       {
        swap(arr[size],arr[1]);
         size--;
         Heapfy(arr,size,1);

       }
   }
};

int main()
{
    Heap h;
    // h.insert(55);
    // h.insert(56);
    // h.insert(45);
    // h.print();
    // cout<<endl;
    // h.deleteHeap();
    // h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    
    for(int i=n/2;i>0;i--)
    {
      h. Heapfy(arr,n,i);

    }

    cout<<"After making this correct:"<<endl;
    for(int i=1;i<=n;i++)
      cout<<arr[i]<<" ";
       h.heapsort(arr,5);
       cout<<endl<<"After sorting  this correct:"<<endl;
    for(int i=1;i<=n;i++)
      cout<<arr[i]<<" ";

    return 0;
}