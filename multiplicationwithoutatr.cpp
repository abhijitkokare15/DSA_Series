#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int neg = 0;
    
    int ans=0;
    // zero condition
    if (n1 == 0 || n2 == 0)
        {
            cout<<"0"<<endl;
            return 0;
        }
        
    // negative wale condition
    if (n1 < 0 && n2 < 0)
         neg = 0;
        
    else if (n1 < 0 || n2 < 0)
        neg = 1;

    // conversion
    n1 = abs(n1);
    n2 = abs(n2);

    

    // multiplication wale case
    for (int i = 1; i <= n2; i++)
         ans = n1 + ans;
        
    if (neg == 1)
    {
        ans=ans - (ans + ans);
        cout<<ans<<endl;
        return ans;
    }
 cout<<ans<<endl;
    return 0;
}