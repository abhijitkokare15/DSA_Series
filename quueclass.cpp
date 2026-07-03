 #include<iostream>
 using namespace std;

 class Queue
 {
   public:
       int *arr;
       int size;
       int front;
       int rear;
   Queue()
   {
     size=10;
     front=rear=0;
     //front==rear=-1;
     arr=new int[size];

   }

   void enqueue(int data)
   {
    if(rear==size)
     cout<<"Queue is full"<<endl;

   else
   {
    // if(front==-1)
    // {
    //     front=0;
    // }

    // //    rear++;
    // //    arr[rear]=data;
    // arr[++rear]=data;
       
        arr[rear]=data;
           rear++;
   }

}

  int dequeue()
{
    if(front==rear)
      cout<<"queue is empty"<<endl;

      else
      {
        int ans=arr[front];
      arr[front]=-1;
        front++;
        if(front==rear)
        {
            rear=0;
            front=0;
        }
    

        return front;

}
}
int frontshow()
{
    if(front==rear)
      return -1;
    
    else
       return arr[front];
}

bool empty()
{
    if(front==rear)
      return true;
    else 
     return false;
}


 };
