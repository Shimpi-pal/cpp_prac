#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
while(start<=end){
if(arr[mid]==key){
    return mid;
}
else if(arr[mid]<key){
    start=mid+1;
}
else{
    end=mid-1;
}
mid=start+(end-start)/2;
}
 return -1;
 }
int main()
{
    int array[5]={1,5,7,8,9};
    int index=binarysearch(array,5,8);
    cout<<"index is:"<<index<<endl;
    return 0;
}
