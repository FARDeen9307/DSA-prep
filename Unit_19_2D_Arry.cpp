#include<iostream>
using namespace std;
//Array input output 


// int main(){
// int n,m;
// cout<<"enter the value of row"<<endl;
// cin>>n;
// cout<<"enter the value of colum"<<endl;
// cin>>m;
// cout<<"enter the element"<<endl;
// int arr[n][m];
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//     }
// }


// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

//     return 0 ;

// }


//Spiral Matrix 

// int main(){
// int n=4, m=4;


//     int arr[n][m];
// cout<<"enetr the element of array";
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//     }
// }

// //out the give array
// cout<<"So the final Array"<<endl;
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }



// int n=4, m=4;
//     int arr[n][m]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//    int srow=0, scol=0;
//     int erow=n-1, ecol=m-1;
//     while(srow<=erow && scol<=ecol){

  
//     //Top
// for(int j=scol; j<=ecol;j++){
//     cout<<arr[srow][j]<<" ";
// }
// //Right
// for(int i=srow+1;i<=erow;i++){
//     cout<<arr[i][ecol]<<" ";
// }
// //Bottom
// for(int j=ecol-1;j>=scol;j--){
//     cout<<arr[erow][j]<<" ";
// }
// //left

// for(int i=erow-1;i>=srow+1;i--){
//     cout<<arr[i][scol]<<" ";
// }
// srow++;
// scol++;
// erow--;
// ecol--;


// }
// cout<<endl;
    
//     return 0;
// }



//diagonal matrix sum
// int diagonal1(int arr[][4],int n){
//     int sum=0;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(i==j){
//             sum +=arr[i][j];
//         }else if(j==n-i-1){
//             sum += arr[i][j];
//         }
//     }
// }
// cout<<" the final sum is "<<sum<<endl;
// return sum;
// }



// int main(){
// int n=4, m=4;
// int sum =0;
//    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//      diagonal1(arr,4);

//     return 0;
// }


//search in sorted matrix 

// bool search1(int arr[][4],int n,int m,int key){
//     int i=0,j=m-1;
//     while(i<n && j>=0){
//         if(arr[i][j]==key){
//             cout<<"key foud here "<<i<<" "<<j<<endl;
//             return true;
//                 }
//                 else if(arr[i][j]>key){
//                     j--;
            
//                 }
//                 else{
//                     i++;
//                 }
//     }
// return false;
// }
   

// int main(){
//     int n=4;
// int arr[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
// search1(arr,4,4,33);



//     return 0;
// }

// assignemt

int main(){
 int arr[3][3]={{1,4,9},{11,4,3},{2,2,3}};
 int sum=0;
 for(int i=1;i<3-1;i++){
    for(int j=0;j<3;j++){
        sum +=arr[i][j];
    }
 }
 cout<<"the sum is "<<sum;
    return 0; 
}