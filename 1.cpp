#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define fi first
#define se second
#define pd(x) printf("%d",x)
#define ps(x) printf(x)
#define sd(x) scanf("%d",&x)
#define pll(x) printf("%lld",x)
#define sll(x) scanf("%lld",&x)
#define MOD 1000000007
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // getline(cin, string_name);
    int i, j, q, r, t;

    int n;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++) {
        cin>>a[i];
    }

    int ch=2000, ci=1, cs=0;
    int ms=0;

    i=0;
    j=-1;
    //int q=0;

    while(j<n-1) {
        //cout<<"start i="<<i<<" j="<<j<<endl;
        if (ch-a[j+1] > 0 && ci*a[j+1]<1000000) {
            j++;
            ch = ch-a[j+1];
            ci = ci*a[j+1];
            cs++;
        } else {
            i++;
            ch = ch+a[i];
            ci = ci/a[i];
            cs--;
        }

        if (cs>=ms) {
            ms = cs;
        }

    }

    cout<<ms;


    return 0;
}

