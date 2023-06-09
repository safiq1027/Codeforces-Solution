#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        long long  int a[n+10];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
                if(a[i]<=a[i+1]){
                    ans=1;
                    break;
                }

        }
       /// int exchange=((n*(n-1))/2)-1;
        if(ans==1){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
    return 0;
}

