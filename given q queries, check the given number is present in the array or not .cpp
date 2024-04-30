// Given Q queries, check if the given number is present in the array or not.
//Note: value of all the elements in the array is less than 10^5.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cout<<"enter the number of element:";
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
const int N=1e5+10;
vector<int>freq(N,0);
for(int i=0;i<n;i++){
    freq[v[i]]++;
}
int q;
cout<<"enter the value of q:";
cin>>q;
while(q--){
    int queryelement;
    cin>>queryelement;
    cout<<freq[queryelement]<<endl;
}
return 0;
}
