#include<iostream>
using namespace std;


void swap1(int *arr,int n){
    for(int i=0;i<n;i++){
int min1=i;
for(int j=i+1;j<n;j++){
    if(arr[j]<arr[min1]){
        min1=j;
    }}
    swap(arr[i],arr[min1]);



    }



    }

void print1(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr1[6]={41,5,1,6,4,8};
swap1(arr1,6);
print1(arr1,6);
   
   

    return 0;
}