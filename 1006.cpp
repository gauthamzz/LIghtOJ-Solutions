#include<bits/stdc++.h>
int a, b, c, d, e, f;
int fn( int n ) {
    long long int x[1000000];
    for(int i=0;i<=n;i++){
    if( i == 0 ) { x[i]=a;continue;}
    else if( i == 1 ) { x[i]=b;continue;}
    else if( i == 2 ) { x[i]=c;continue;}
    else if( i == 3 ) { x[i]=d;continue;}
    else if( i == 4 ) { x[i]=e;continue;}
    else if( i == 5 ) { x[i]=f;continue;}
    else
    x[i]=x[i-1]+x[i-2]+x[i-3]+x[i-4]+x[i-5]+x[i-6];
    x[i]%=10000007;

        
    }


    return x[n];
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n)%10000007 );
    }
    return 0;
}