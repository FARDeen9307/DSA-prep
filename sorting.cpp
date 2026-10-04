#include<iostream>
using namespace std;


//buble sort

// void sortbuble(int *arr,int n){
//     for(int i=0; i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(
//             arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

// }
// void print1(int * arr ,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// } 

// int main(){
// int arr[6]={5,4,1,8,3,2};
// int n= sizeof(arr)/sizeof(int);
// sortbuble(arr,n);
// print1(arr,n);

    

// }


//2 selection sort

// void selection1(int *arr,int n){
//     for(int i=0;i<n-1;i++){
//         int smal=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[smal]){
//                 smal=j;
//             }
//         }
//         swap(arr[i],arr[smal]);
//     }
// }


// int main(){
// int arr[6]={4,5,1,3,7,2};
// int n= sizeof(arr)/sizeof(int);
// selection1(arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
  
//     return 0;
// }


//3.insertion sort

// void insertion1(int *arr, int n){
//     for(int i=1;i<n;i++){
//         int prev=i-1;
//         int a=arr[i];
//         while(prev>=0 && arr[prev]>a){
            
//             swap(arr[prev],arr[prev+1]);
//             prev--;
//         }
//     }
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void print1(int *arr,int n){

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){

// int arr[6]={1,5,4,3,7,6};
// int n= sizeof(arr)/sizeof(int);

// insertion1(arr,n);
// // print1(arr,n);

//     return 0;
// }



int main(){
int arr[]={ 5,5,1,1,3,4,8,8,8,1};
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n;i++){
    int frequency=0;
    int ar=arr[i];
    if(arr[i]==ar);
}

    return 0;

}