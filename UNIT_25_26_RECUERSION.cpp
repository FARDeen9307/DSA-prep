#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

//factorial
// int fact(int num){

//     if(num==0 ||num==1){
//         return 1;
//     }
//     else{
//        return num*fact(num-1);
//     }
// }
// int main(){

// cout<<fact(5)<<endl;
//     return 0;
// }



// //Number in reverse
// void pri(int num){

//     if(num==0){
//         return;
//     }
//     else{
//         cout<<num<<" ";
//         pri(num-1);
        
//     }
// }
// int main(){

// pri(10);

//     return 0;
// }


// //sum of natural number
// int sum(int num){
//     if(num==1){
//         return 1;
//     }
//     else{

//         return num+sum(num-1);
//     }
// }
// int main(){

// cout<<sum(5)<<endl;
//     return 0;
// }

// //fibonacii
// int fib(int n){
//     if(n==1||n==0){
//         return n;
      
//     }
         
//     return fib(n-1)+fib(n-2);
      
      
           
// }
// int main(){

// cout<<fib(3);
//     return 0;
// }




// //check Array sorted
// bool isSort(int *arr,int n,int i){

//     if(i==n-1){
//         return true;
//     }

    

//          if(arr[i]>arr[i+1])
//          return false;
    
//         isSort(arr,n,i+1);
         
    
// }
// int main(){  

// int arr[]={1,2,3,5,4};
// if(isSort(arr,5,0)){
//     cout<<"yes";
// }else{
//     cout<<"no";
// }

// return 0;
// }



// //fisrt occurence 
// int p(vector <int>&vec,int i,int n,int target){
//     if(i==n){
//         return -1;
//     }
//     if(vec[n]==target){
       

        
//         return n;
       
//     }
//     p(vec,i,n-1,target);
// }


// int main(){
//  vector<int> vec={1,2,3,3,3,3,3,4};
//  int n=vec.size();


//  cout<<p(vec,0,n,6)<<endl;
//  cout<<pow(2,10);

//     return 0;
// }




// //X to power 
// int p(int m,int n){
//     if(n==0){
//         return 1;
//     }
//     int val1=pow(m,n/2);
//     int val2=val1*val1;
//     if(n%2 !=0){
//         return m*val2;
//     }

//     return val2;
 
// }
// int main(){
//     cout<<p(2,5)<<endl;
//     cout<<pow(2,20);


//     return 0;
// }



// //Tiling problem 
// int til(int n){
//     if(n==0||n==1){
//         return 1;
//     }

//     int ans1=til(n-1);
//     int ans2=til(n-2);
//     return ans1+ans2;
// }
// int main(){
// int n=4;
// cout<<til(n);

//     return 0;
// }





// //Remove duplicate from string
// void dup(string str,string ans,int i,bool *map){
//     char ch=str[i]-'a';
//     int indx=(int)ch;

//     if(i==str.size()){
//         cout<<ans;
//         return;
//     }

//     if(map[i]==true){
//         dup(str,ans,i+1,map);
//     }

//     map[i]=true;
//     ans[i]=str[i];
//     dup(str,ans,i+1,map);

// }
// int main(){
// string str="apnacollege";
// string ans="";
// bool map[26]={false};

// dup(str,ans,0,map);

//     return 0;
// }

// void f1(int n){

// if(n==0){
//     return;
// }
// f1(n-1);
// cout<<n<<" ";

// }
// void f2(int n){

// if(n==0){
//     return;
// }
// cout<<n<<" ";
// f2(n-1); 
// cout<<n<<" ";


// }


//last ocurrence method 1 mine

// int check(vector <int>vec,int i,int target,int n){

//     if(i==n){
//         return -1;
//     }

//     if(vec[n]==target){

//         return n;
//     }

//      check(vec,i,target,n-1);
// }
// int main(){
//     vector<int>vec={1,2,3,3,3,4};


// int i=0,target=3;
// int n=vec.size();
// cout<<check(vec,0,3,n)<<endl;

//     return 0;

// }



//last ocurrence check method 2
// int check(vector<int>vec,int i,int target){
//     if(i==vec.size()){
//         return -1;
//     }

//    int index=check(vec,i+1,target);
//    if(index==-1){
//     if(vec[i]==target){
//         return i;
//     }
//    }

//    return index;
// }
// int main(){
// int i=0;
// vector<int> vec={1,2,3,3,3,4};
// int target=3;
// cout<<check(vec,i,target)<<endl;
//     return 0;
// }

// int tile(int n){

//     if(n==0||n==1){

//         return 1 ;
//     }
//     if(n<0){
//         return 0;
//     }
//     return tile(n-1)+tile(n-4);
// }
// int main(){

// int n=5;
// cout<<tile(n)<<endl;
//     return 0;


// //remove duplicate from string 
// void removeString(string str,string ans,int i,bool map[]){

//     if(i==str.length()){
//         cout<<ans;
//         return ;
//     }

//     int index =str[i]-'a';
//     if(map[index]){
//         removeString(str,ans,i+1,map);
//     }
//     else{
//         map[index]=true;
//         removeString(str,ans+str[i],i+1,map);
//     }
// }

// int main(){  
// string str1="apnacollege";
// string ans="";
// bool map[26]={false};
// int i=0;
// removeString(str1,ans,i,map);


// return 0;
// }




// //friends pairing problem 
// int pairFriend(int n){

// if(n==1||n==2){
//     return n;
// }

// return pairFriend(n-1)+((n-1)*pairFriend(n-2));
// }
// int main(){
// int n=4;

// cout<<pairFriend(n)<<endl;

//     return 0;
// }




//Binary string problem 

// void binary(int n,int lastPlace,string ans){

//     if(n==0){
//         cout<<ans<<endl;
//         return;
//     }
//    if(lastPlace!=1){
//     binary(n-1,0,ans+'0');
    
//     binary(n-1,1,ans+'1');
   
//    }
//    else{   
//    binary(n-1,0,ans+'0');
   
//    }
// }
// int main(){
// int n=3;
// string ans="";

// binary(n,0,ans);

//     return 0;
// }


//binary string 

void binary(int n,int lastPlace,string ans){

    if(n==0){
        cout<<ans<<endl;
        return;
    }

    if(lastPlace==0){
        binary(n-1,0,ans+'0');
        binary(n-1,1,ans+'1');
    }
    else{
       binary(n-1,0,ans+'0'); 
    }
}
int main(){

int n=3;
string ans="";
int lastPlace=0;
binary(n,lastPlace,ans);

    return 0;
}