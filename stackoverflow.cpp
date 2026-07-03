#include <iostream>
using namespace std;

#define MAX 5

class Stack
{
    int top;
    int arr[MAX];

public:
    Stack()
    {
        top = -1;
    }

    void push()
    {
        int ele;
        if (top == MAX - 1)
        {
            cout << "Stack is Overflow!" << endl;
        }
        else
        {
            cout << "Enter the element to be inserted: ";
            cin >> ele;
            top++;
            arr[top] = ele;
            cout << "Element pushed successfully!" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Underflow!" << endl;
        }
        else
        {
            cout << "Popped element: " << arr[top] << endl;
            top--;
        }
    }

    void show()
    {
        if (top == -1)
        {
            cout << "Stack is Empty!" << endl;
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void showpeak()
    {
        if (top == -1)
        {
            cout << "Stack is Empty!" << endl;
        }
        else
        {
            cout << "Peak element is: " << arr[top] << endl;
        }
    }
};

int main()
{
    Stack s;
    int ch;

    while (true)
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Show" << endl;
        cout << "4. Show Peak" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            s.push();
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.show();
            break;

        case 4:
            s.showpeak();
            break;

        case 5:
            cout << "Exiting..." << endl;
            return 0;

        default:
            cout << "Invalid Choice!" << endl;
        }
    }
}
