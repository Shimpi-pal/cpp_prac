#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
vector<int>v(n+1,0);
for(int i=1;i<=n;i++){
    cin>>v[i];
}
for(int i=1;i<=n;i++){
    v[i]+=v[i-1];   //prefix sum
}
int q;
cout<<"enter the value of q:";
cin>>q;
while(q--){
int l,r;
cout<<"enter the values of l,r:";
cin>>l>>r;
int ans=0;
ans=v[r]-v[l-1];
cout<<ans<<endl;
}
return 0;
}
