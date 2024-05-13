#include<iostream>
using namespace std;
int main(){
     int arr1[]={1,2,3};
     int arr2[]={4,5,6};
     int m=3;
     int n=3;
     int result_arr[m+n];
     int i=0;
     int j=0;
     int k=0;
     while(i<m and j<n){
        if(arr1[i]<arr2[j]){
            result_arr[k]=arr1[i];
            k++;
            i++;
        }
        else{
                result_arr[k]=arr1[j];
        }
     }
     while(i<m){
        result_arr[k]=arr1[i];
        k++;
        i++;
     }
     while(j<n){
        result_arr[k]=arr2[j];
        k++;
        j++;
     }
     for(int i=0;i<m+n;i++){
     cout<<result_arr[i]<<" ";
     }
     return 0;
}
