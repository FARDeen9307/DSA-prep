// #include<iostream>
// #include<cmath>
// #include<iomanip>
// using namespace std;
// int main(){
// int num;
// cout<<"enter N >2"<<endl;
// cin>>num;
// int first=0,second=1;
// cout<<first<<" "<<second<<" ";
// for(int i=3;i<=num;i++){
//     int third=first+second;
//     cout<<third<<" ";
//     first=second;
//     second=third;
// }

//     return 0;
// }


//Q1 palindrome

// #include<iostream>
// #include<iomanip>
// #include<cmath>
// using namespace std;
// int palindrom(int num){
// int sum=0,last;
//     while(num !=0){
//         last=num%10;
//         num=num/10;
//         sum=sum*10+last;
//     }
//     return sum;
// }
// int main(){
// int num=111;
//  if(palindrom(num)==num){
//     cout<<"it is palid"<<endl;
//  }else{
//     cout<<"it is not"<<endl;
//  }
//     return 0;

// }


//2 sum of digit

// #include<iostream>
// #include<iomanip>
// #include<cmath>
// using namespace std;
// int digSum(int num){
//     int last,sum=0;
//     while(num !=0){

//         last=num%10;
//         num=num/10;
//         sum +=last;
//     }
//     return sum;
// }
// int main(){

// int num=123;
// cout<<digSum(num)<<endl;
//     return 0;
// }


//Q3
// #include<iostream>
// #include<cmath>
// using namespace std;
// int sum(int a,int b){
//     return a^2+b^2+2*a*b;
// }
// int main(){
// cout<<sum(1,2)<<endl;
//     return 0;
// }


//Q4

// #include<iostream>
// #include<iomanip>
// using namespace std;
// int largest(int a,int b,int c){
//     if(a>=b && a>=c){
//         return a;
//     }else if(b>=c){
//         return c;

//     }else{
//         return c;
//     }
// }
// int main(){
// cout<<"the large "<<largest(122,20,10)<<endl;

//     return 0;
// }


//Q5

// #include<iostream>
// #include<iomanip>
// using namespace std;
// char chh(char ch){

//     if(ch=='z'){
//         return 'a';
//     }else{
//         return ++ch;
//     }
// }
// int main(){
//     char ch2;
// cout<<"enetr the ch"<<endl;
// cin>> ch2;
// cout<<chh(ch2)<<endl;
//     return 0;
// }



// #include<iostream>
// #include<iomanip>
// #include<cmath>
// using namespace std;
// int binarySearch(int *arr,int n,int key){
//     int start=0,end=n-1;
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(arr[mid]==key){
//             return mid;

//         }
//         else if(arr[mid]<key){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//  int key=166;
//  int arr[]={2,4,6,8,10,12,14,16};
//  int n=sizeof(arr)/sizeof(int);
//  cout<<"this mid :"<<binarySearch(arr,n,key)<<endl;


    
//     return 0;
// }

// #include<iostream>
// #include<iomanip>
// #include<cmath>
// using namespace std;
// int insertion(int *arr,int n){
//    int freq[10000]={0};
//    int minval=INT_FAST8_MAX,maxval=INT_FAST8_MIN;
//    for(int i=0;i<n;i++){
//     minval=min(minval,arr[i]);
//     maxval=max(maxval,arr[i]);
//     freq[arr[i]]++;


//    }

//    for(int i=minval,j=0;i<=maxval;i++){

//     while(freq[i]>0){

//         arr[j++]=i;
//         freq[i]--;
//     }
//    }
  


//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){

// int arr[]={1,4,1,3,2,4,3,7};
// int n=sizeof(arr)/sizeof(int);
// insertion(arr,n);
//     return 0;
// }



// #include<iostream>
// #include<iomanip>
// #include<cmath>
// #include<algorithm>
// using namespace std;

// int main(){

// int arr[]={5,4,3,2,1};
// int n=sizeof(arr)/sizeof(int);
// sort(arr,arr+n,greater<int>());


// for(int i=0;i<n;i++){

//     cout<<arr[i]<<" ";
// }
//     return 0;
// }



//check after one 
// #include<iostream>
// #include<iomanip>
// #include<cmath>
// #include<algorithm>
// using namespace std;


// int sumDiagonal(int mat[][4],int  n,int key){


//     for(int i=0;i<n;i++){
//         int mid,start=0,end=n-1;
//         mid=(start+end)/2;

//         if(mat[i][mid]==key){
//             cout<<"key is present at:"<<"("<<i<<","<<mid<<")";
//         }
//         else if(mat[i][mid]<key){
//             start=mid+1;
//             end=n-1;
//         }
//         else if(mat[i][mid]>key){
//             end=mid-1;
//             start=0;
//         }
//         else{
//             cout<<"key is not present"<<endl;
//         }
//     }
// }


       


// int main(){
// int n=4,m=4;
// int matrix[4][4]={{10,20,30,40},
//                 {15,25,35,45},
//                  {27,29,37,48},
//                 {32,33,39,50}};


// // sumDiagonal(matrix,4,10);

// int row=0,col=n-1,key=55;

// while(row<n && col>=0){
//     if(matrix[row][col]==key){
//        cout<<"key find at"<<row<<","<<col;
//          break;
//     }
//     else if(matrix[row][col]<key){
//         row++;
//     }
//     else if(matrix[row][col]>key){
//         col--;
//     }
    
// }
//     return 0;
// }


// #include<iostream>
// #include<cmath>
// #include<iomanip>
// #include<algorithm>
// #include<string>

// using namespace std;
// bool rever( string st1,string st2){
    
// if(st1.length()!=st2.length()){
//     cout<<"it is not valid ana"<<endl;
//     return false;
// }
// int co[26]={0};
// for(int i=0;i<st1.length();i++){
   
//     co[st1[i]-'a']++;
// }
// for(int i=0;i<st2.length();i++){
//     if(co[st2[i]-'a']==0){
//         cout<<"it is not valid"<<endl;
//         return false;
//     }
//     co[st2[i]-'a']--;
// }

// cout<<"it is valid naa"<<endl;
// return true;
    
// }
// int main(){

//    string st1="car";
//    string st2="cat";
// rever(st1,st2);

    
//     return 0;
// }

// #include<iostream>
// #include<iomanip>
// #include<cmath>
// #include<algorithm>
// #include<string>
// using namespace std;
// void leak(int size){
//     int *arr= new int[size];
//     int x=1;
//     for(int i=0;i<size;i++){
//         arr[i]=x++;
//     }

//     cout<<arr<<endl;
//     delete arr;
//     cout<<arr;
// }
// int main(){
// int row,col;
// cout<<"enetr the no of row"<<endl;
// cin>>row;
// cout<<"enetr the col"<<endl;
// cin>>col;
// int **mat= new int*[row];
// for(int i=0;i<row;i++){
//     mat[i]=new int[col];
// }
// int x=1;
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){

//         mat[i][j]=x++;
//     }
// }

// for(int i=0;i<row;i++){

//     for(int j=0;j<col;j++){
//         cout<<mat[i][j]<<" ";
//     }
//     cout<<endl;
// }
    

//     return 0;
// }



// #include<iostream>
// #include<iomanip>
// #include<cmath>
// #include<algorithm>
// #include<string>
// #include<vector>


// using namespace std;
// int main(){

// vector <int> vec={2,7,11,15};

// int start=0,end=vec.size()-1;
// int target=18;
// while(start<end){
// int curSum=vec[start]+vec[end];
//     if(curSum==target){
//         cout<<"availble :"<<start<<","<<end;
//         break;
//     }
//     else if(curSum>target){
//         end--;
//     }
//     else if(curSum<target){
//         start++;
//     }
// }

//     return 0;
// }

#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int countSet(int num){

    int sum=0,rem;
    while(num!=0){
        rem=num%10;
        if(rem==1){ 

        sum +=rem;
        }
        num =num/10;
    }
    cout<<"you set bit :"<<sum<<endl;
    return sum;
}
int main(){     
int num=1010;
countSet(num);

    return 0;
}