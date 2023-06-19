#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x=0,y=0,sum=0,ans,z;
        cin>>n;
        int a[n+10];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]==1){
                x++;
            }
            else{
                y++;
            }
        }
        ///cout<<"plus 1"<<x<<"Minus 1"<<y<<"Sum "<<sum<<endl;
       if(sum>=0){
        if(y%2!=0){
            ans=1;
        }
        else
        {
            ans=0;
        }
       }
       else
       {
           //sum<0
           sum=abs(sum);
           if(sum%2==0){
             z=sum/2;
            if(y%2!=0){
                if(z%2==0){
                    z++;
                    ans=z;
                }
                else{
                    ans=z;
                }
            }
            else
            {
                if(z%2!=0){
                    z++;
                    ans=z;
                }
                else
                {
                    ans=z;
                }
            }
           }
           else
           {
               //sum%2!=0
               if(y%2==0){
                z=(sum+1)/2;
                if(z%2==0){
                    ans=z;
                }
                else
                {
                    z++;
                    ans=z;
                }
               }
               else
               {
                   z=(sum+1)/2;
                   if(z%2==0){
                    z++;
                    ans=z;
                   }
                   else
                   {
                       ans=z;
                   }
               }
           }

       }
       cout<<ans<<endl;

    }
    return 0;
}

