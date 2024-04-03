#include<iostream>
using namespace std;
int main()
{
    int n;
    int array[n];
    cout<<"enter the number of element:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int max=array[0];
    for(int i=0;i<n;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
        cout<<"max value is:"<<max;
    return 0;
}
