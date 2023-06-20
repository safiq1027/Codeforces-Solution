#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n;
        cin>>n;
        long long int sum=n;
        while(n){
            n/=2;
            sum+=n;
        }
        cout<<sum<<endl;
    }
    return 0;
}

