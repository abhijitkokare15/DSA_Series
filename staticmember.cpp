#include <iostream>
using namespace std;

void fun() {
    static int x = 0; // initialized only once
    x++;
    cout << x << endl;
}

int main() {
    fun();
    fun();
    fun();
}