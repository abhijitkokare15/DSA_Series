#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num = 1;
    char ch = 'A';

    while (1)
    {
        switch (ch)
        {
        case 'A':
            switch (num)
            {
            case 1:
                cout << "Hello" << endl;
                exit(0);

            default:
                cout << "Hello2" << endl;
                break;
            }
            break;

        default:
            cout << "no switch" << endl;
            break;
        }
        
    }
}
