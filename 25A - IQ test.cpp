 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n ,even=0,odd=0,ans,res;
    cin>>n;
    int arr[n+10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
            ans=i+1;
        }
        else
        {
            odd++;
            res=i+1;
        }
    }
    if(even==1){
        cout<<ans<<endl;
    }
    else
    {
        cout<<res<<endl;
    }

     return 0;
 }

