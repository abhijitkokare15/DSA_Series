/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {

    if(head == NULL) {
        return NULL;
    }

    // check if at least k nodes exist
    Node* temp = head;
    int count = 0;

    while(temp != NULL && count < k) {
        temp = temp->next;
        count++;
    }

    // if nodes < k return head
    if(count < k) {
        return head;
    }

    // reverse k nodes
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    count = 0;

    while(curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // recursion
    if(next != NULL) {
        head->next = kReverse(next, k);
    }

    return prev;
}