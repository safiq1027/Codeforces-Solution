#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,mx=0;
    cin>>n>>l;
    int a[n+10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        int dif=abs(a[i]-a[i+1]);
        mx=max(mx,dif);
    }
    int firstdif=a[0]-0;
    int lastdif=l-a[n-1];
    int firstlastdif=max(firstdif,lastdif);
    double ans;
    if(mx>2*firstlastdif){
        ans=double(mx)/2;
    }
    else
    {
        ans=firstlastdif;
    }
    cout<<fixed<<setprecision(10);
    cout<<ans<<endl;
    return 0;
}

