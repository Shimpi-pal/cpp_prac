//find the unique number in a given array where all the elements are being repeated twice with one value being unique.
#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"enter the number of element:";
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int element;
    cin>>element;
    v.push_back(element);
}
for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
        if(v[i]==v[j]){
            v[i]=v[j]=-1;
        }
    }
}
 for(int i=0;i<v.size();i++){
    if(v[i]>0){
        cout<<v[i]<<endl;
    }
 }
 return 0;
}
