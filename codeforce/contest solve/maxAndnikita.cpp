#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y >> z;
        int a=n+(x+y-1);
        // cout<<"a: "<<a<<" n: "<<n<<" x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
        int tot = a / (x + y);
        // cout<<"tot: "<<tot<<endl;
        int with_ai;
        int max_on_own = x * z;
        // cout<<"max_on_own: "<<max_on_own<<endl;
        
        if (x*z >= n)
        {
        int with_ai_tot = (n+x-1)/x;
        }
        else
        {
            int remaining = n - max_on_own;
            // cout<<"remaining: "<<remaining<<endl;
            int cal = remaining + (x + y * 10 - 1);
            // cout<<"cal: "<<cal<<endl;
            with_ai = cal / (x + y * 10) + z;
            with_ai_tot=wit_ai+z;
            // cout<<"with_ai: "<<with_ai<<endl;

        }
        if (with_ai > tot)
        {
            cout <<tot << endl;
        }
        else
        {
            cout << with_ai << endl;
        }
    }
    return 0;
}