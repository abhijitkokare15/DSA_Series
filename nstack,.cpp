#include <bits/stdc++.h> 
class NStack
{
public:
    int *arr;
    int *top;
    int *next;
    int freespot;

    NStack(int N, int S)
    {
        arr = new int[S];
        top = new int[N];
        next = new int[S];

        // initialize free spot to 0
        freespot = 0;
        
        // initialize all stacks as empty
        for(int i = 0; i < N; i++)
            top[i] = -1;

        // initialize next array
        for(int i = 0; i < S; i++)
            next[i] = i + 1;

        // last element points to -1
        next[S - 1] = -1;
    }

    // Pushes 'x' into the mth stack
    bool push(int x, int m)
    {
        // check overflow condition
        if(freespot == -1)
            return false;

        // step 1: find index where we want to insert
        int index = freespot;

        // step 2: update freespot to next free index
        freespot = next[index];

        // step 3: insert element into array
        arr[index] = x;

        // step 4: link the new element to previous top
        next[index] = top[m - 1];

        // step 5: update top of stack m
        top[m - 1] = index;

        return true;
    }

    // Pops top element from Mth Stack
    int pop(int m)
    {
        // check underflow condition
        if(top[m - 1] == -1) {
            return -1;
        }
         
        // step 1: find index of top element
        int index = top[m - 1];
        
        // step 2: move top to next element
        top[m - 1] = next[index];
        
        // step 3: add this index to free list
        next[index] = freespot;
        
        // step 4: update freespot
        freespot = index;
        
        // step 5: return popped element
        return arr[index];
    }
};