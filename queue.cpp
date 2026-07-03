#include <iostream>
using namespace std;

class Queue {
public:
    static const int MAX = 5;
    int arr[MAX];
    int front, rear;

    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int data) {
        if (rear == MAX - 1) {
            cout << "Queue is full\n";
        } else {
            if (front == -1)
                front = 0;
            rear++;
            arr[rear] = data;
            cout << "Inserted: " << data << endl;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        } else {
            cout << "Deleted: " << arr[front] << endl;
            front++;
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(14);
    q.enqueue(15);

    q.dequeue();
    q.dequeue();

    q.display();

    return 0;
}
