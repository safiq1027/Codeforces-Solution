#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      long long int  n,mx=0;
       cin>>n;
       long long int  a[n+10];
       for(long long i=0;i<n;i++){
         cin>>a[i];
       }

       long long ans=0;
       for(long long i=1;i<n;i++){
            if(a[i-1]>a[i]){
                ans+=(a[i-1]-a[i]);
            }

       }
       cout<<ans<<endl;
   }

    return 0;

}

