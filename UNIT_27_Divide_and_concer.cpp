#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

// void merge(int st,int end,int mid,int arr[]){
// vector<int>temp;
   
//     int i=st,j=mid+1;
//     while(i<=mid && j<=end){
//         if(arr[i]<=arr[j]){
//             temp.push_back(arr[i++]);
//         }
//         else{
//             temp.push_back(arr[j++]);
//         }

//     }
//         while(i<=mid){
//             temp.push_back(arr[i++]);
//         }
//         while(j<=end){
//              temp.push_back(arr[j++]);
//         }


//         //copy
//         for(int index=st,x=0;index<=end;index++){
//             arr[index]=temp[x++];
//         }
    


    

// }

// void mergesort(int st,int end,int arr[]){
//     if(st>=end){
//         return ;
//     }
//     int mid=st+(end-st)/2;
//     //left
//     mergesort(st,mid,arr);
//     //right
//     mergesort(mid+1,end,arr);

//     //call megerge;
//     merge(st,end,mid,arr);


// }

// //merge sort
// int main(){
// int arr[]={6,3,7,5,2,4};
// int st=0,end=5;

// mergesort(st,end,arr);

// for(int i=0;i<=end;i++){
//     cout<<arr[i]<<" ";
// }

//     return 0;



// //merge sort
// //merge
// void merge(int st,int mid,int end,int arr[]){
//     int i=st,j=mid+1;
//     vector<int>temp;

//     while(i<=mid && j<=end){

//         if(arr[i]<=arr[j]){
//             temp.push_back(arr[i++]);
//         }
//         else{
//             temp.push_back(arr[j++]);
//         }
//     }

//     while(i<=mid){
//         temp.push_back(arr[i++]);
//     }
//     while(j<=end){

//         temp.push_back(arr[j++]);
//     }

//     //copr

//     for(int index=st,x=0;index<=end;index++){
//         arr[index]=temp[x++];
//     }
// }
// void mergeSort(int st,int end,int arr[]){
//     if(st>=end){
//         return;
//     }
//     int mid=st+(end-st)/2;
//     mergeSort(st,mid,arr);
//     //right
//     mergeSort(mid+1,end,arr);
//     //merge

//     merge(st,mid,end,arr);

    
// }


// //call print
// void print(int arr[],int n){
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){

// int arr[]={6,3,7,5,2,4};
// int st=0,end=5;
// mergeSort(st,end,arr);

// print(arr,5);


//     return 0;
// }



// //Quick sort

// //partition
// int partition(int st,int end,int arr[]){
//     int i=st-1;
//     int piv=arr[end];
//     for(int j=st;j<end;j++){
//         if(arr[j]<piv){
//             i++;
//             swap(arr[i],arr[j]);

//         }
//     }
//     i++;
//     swap(arr[i],arr[end]);
//     return i;

// }

// void quick(int st,int end,int arr[]){

//     if(st>=end){
//         return;
//     }
//     int pivot=partition(st,end,arr);

//     quick(st,pivot-1,arr);
//     //right
//     quick(pivot+1,end,arr);
// }
// int main(){
// int arr[]={6,3,7,5,2,4};

// int st=0,end=5;
// quick(st,end,arr);

// for(int i=0;i<=5;i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }


// //search target in Rotated sorted
// //means one sorted array pivoted at point which makes
// //two sorted array L1,L2 for that we use modify 
// //binary search to find target
// int search(int arr[],int st,int end,int target){
//   if(st>end){
//     return -1;
// }
//     int mid=st+(end-st)/2;
//     if(arr[mid]==target){
//         return mid;
//     }

  
// if(arr[st]<=arr[mid]){  
//     //line 1
//     if(arr[st]<=target&& target<arr[mid]){
//         return search(arr,st,mid-1,target);
//     }else{
//         return search(arr,mid+1,end,target);
//     }}

//     else{  
//     if(arr[mid]<=target&& target<arr[end]){
//          return search(arr,mid+1,end,target);
//     }else{
//         return search(arr,st,mid-1,target);
//     }}
// }
// int main(){
// int target=0;
// int arr[]={4,5,6,7,0,1,2};
// int end=6,st=0;
// cout<<search(arr,st,end,target)<<endl;
//     return 0;
// }




int search(int arr[],int st,int end,int target){

    if(st>end){
        return -1;
    }

    //mid cal
    int mid=st+(end-st)/2;
    if(arr[mid]==target){
        return mid;
    }

    if(arr[st]<=arr[mid]){

    

    if(arr[st]<=target && target<=arr[mid]){
        return search(arr,st,mid-1,target);
    }

    return search(arr,mid+1,end,target);
}else{
    
 if(arr[mid]<=target && target<=arr[end]){
        return search(arr,mid+1,end,target);
    }

    return search(arr,st,mid-1,target);

}
}

int main(){
int target=2;
int arr[]={4,5,6,7,0,1,2};
int end=6,st=0;
cout<<search(arr,st,end,target)<<endl;
    return 0;
}
