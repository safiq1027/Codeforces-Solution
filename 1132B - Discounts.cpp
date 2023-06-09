#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int sum=0;
    cin>>n;
    int a[n+10];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    int m;
    cin>>m;
    int q[m+10];
    for(int i=0;i<m;i++){
        cin>>q[i];
        int index=n-q[i];
        long long int ans=sum-a[index];
        cout<<ans<<endl;
    }
    return 0;

}

