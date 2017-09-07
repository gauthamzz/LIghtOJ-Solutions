#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt","r",stdin);
    int t;
    cin >> t;
    int k = 1;
    while (t--)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int n;
        cin>>n;
        cout << "Case " << k<< ":" <<endl;
        while(n--){
            int a,b;
            cin>>a>>b;
            if(x1<a&& a<x2 && y1<b && b<y2) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        k++;
       
    }

    
    return 0;
}
