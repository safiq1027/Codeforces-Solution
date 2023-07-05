#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int q;
    cin>>q;
    while(q--)
    {
        int m;
        cin>>m;
        int ans=upper_bound(a,a+n,m)-a;
        cout<<ans<<endl;
    }

    return 0;
}

