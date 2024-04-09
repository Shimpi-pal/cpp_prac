#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
int n;
cout<<"enter the number of element:";
cin>>n;
for(int i=0;i<n;i++){
    int element;
    cin>>element;
    v.push_back(element);
}
int sum=0;
for(int i=0;i<v.size();i++){
    if(i%2==0){
        sum+=v[i];
    }
    else{
        sum-=v[i];
    }
}
    cout<<sum<<endl;
    return 0;
    }

