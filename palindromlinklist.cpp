/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/
//Approach 1
/*
#include<vector>
class Solution {
    public:
       bool chkpal(vector<int> &arr)
       {
           int s=0;
           int e=arr.size()-1;
           while(s<=e)
           {
               if(arr[s]==arr[e])
               {
                   s++;
                   e--;
               }
               else
               {
                   return 0;
               }
           }
           
           return 1;
       }
  public:
    bool isPalindrome(Node *head) {
        vector<int> arr;
        
        Node *temp = head;
        while(temp!=0)
        {
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        return chkpal(arr);
        
    }
};*/