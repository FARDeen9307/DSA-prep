#include <iostream>
using namespace std;
#include<iomanip>
// int main(){
// float pencil;
// float pen;
// float eraser;
// float bill;
// float sum;
// //take the value from user 
// cout<<"ente the value of pencil"<<endl;
// cin>>pencil;
// cout<<"ente the value of pen"<<endl;
// cin>>pen;
// cout<<"ente the value of eraser"<<endl;
// cin>>eraser;
// //calculate the sum with gst
// sum=pencil+pen+eraser;
// bill=sum+(sum*0.18);
// cout<<"your bill with GST is "<<bill<<endl;



// }



void swap1(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


void print1(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }
}
int main(){
int arr1[6]={4,7,83,1,3,1};

print1(arr1,6);
   
   

    return 0;
}