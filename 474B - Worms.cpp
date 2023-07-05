#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+10];
    int csum[n+10];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            csum[i]=a[i];
        }
        else
        {
            csum[i]=csum[i-1]+a[i];
        }
    }

    int m;
    cin>>m;
    int q[m+10];
    for(int i=0;i<m;i++){
        cin>>q[i];
        int ans=lower_bound(csum,csum+n,q[i])-csum;
        cout<<ans+1<<endl;
    }
    return 0;
}

