#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
int array[n];
for(int i=0;i<n;i++){
    cin>>array[i];
}
int key;
cout<<"enter the value of key:";
cin>>key;
int ans=-1;
for(int i=0;i<n;i++){
    if(array[i]==key){
        ans=i;
    }
    }
    cout<<"ans is:"<<ans<<endl;
}

