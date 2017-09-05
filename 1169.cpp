#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt","r",stdin);
    int a[1002], b[1002], ab[1002], ba[1002];  int c1[1002], c2[1002];
    int t;
    cin >> t;
    int k = 0;
    while (t--)
    {
        int n;
        cin >> n;
       
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n - 1; i++)
            cin >> ab[i];
        for (int i = 0; i < n - 1; i++)
            cin >> ba[i];

      
        c1[0] = a[0];
        c2[0] = b[0];
        for (int i = 1; i < n; i++)
        {
            c1[i] = min(c1[i - 1] + a[i], c2[i - 1] + ba[i - 1] + a[i]);
            c2[i] = min(c2[i - 1] + b[i], c1[i - 1] + ab[i - 1] + b[i]);
            // cout<<c1[i]<<" "<<c2[i]<<endl;
        }
        k++;
        cout << "Case " << k<< ": " << min(c1[n - 1], c2[n - 1])<<endl;
    }
    return 0;
}
