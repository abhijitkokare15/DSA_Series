/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
      
    ListNode *detectCycle(ListNode *head) {
        // find the Node where we say it a cycle
          if( head==NULL || head->next==NULL)
               return NULL;

    //    ListNode* fast=head;
    //    ListNode* slow=head;

    //    while(slow!=NULL && fast!=NULL)
    //    {
         
        
    //      fast=fast->next;
    //        if(fast!=NULL)
    //          fast=fast->next;

    //         slow=slow->next;

    //         if(slow==fast)
    //         {
    //             break;
    //         }
    //    }

    //    if(slow!=fast)
    //      return NULL;

    // slow=head;

    // while(slow!=fast)
    // {
    //     slow=slow->next;
    //      fast=fast->next;
    // }

    // return slow;

    // }
    //unordered_map<ListNode*,bool>visted;
     map<ListNode*,bool>visted;
    ListNode* temp=head;
    while(temp!=NULL)
    {
        if(visted[temp]==true)
           return temp;
     
     visted[temp]=true;
      temp=temp->next;
    }

    return NULL;
    }
};