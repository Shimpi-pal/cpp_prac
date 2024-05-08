//check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.
#include<iostream>
#include<vector>
using namespace std;
bool checkSuffixSumPrefixSum(vector<int> &v){
int total_Sum=0;
for(int i=0;i<v.size();i++){
    total_Sum+=v[i];
}
int prefix_Sum=0;
for(int i=0;i<v.size();i++){
    prefix_Sum+=v[i];
    int suffix_Sum=total_Sum-prefix_Sum;
    if(prefix_Sum==suffix_Sum){
        return true;
    }
}
    return false;
}
int main(){
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}
cout<<checkSuffixSumPrefixSum(v)<<endl;
return 0;
}

