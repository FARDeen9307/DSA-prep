# include <iostream>
#include <vector>
using namespace std;


// creating the 2D Array dynamically
// int main(){
// int x=0;
// int row=4,col=3;
// int **matrix= new int*[row];
// for(int i=0;i<row;i++){
//     matrix[i]=new int[col];
// }
// for(int i=0;i<row;i++){

//     for(int j=0;j<col;j++){
//         matrix[i][j] = ++x;
//     }
// }

// for(int i=0;i<row;i++){

//     for(int j=0;j<col;j++){
//         cout<<matrix[i][j]<<" ";
//     }cout<<endl;
// }
//     return 0;
// }


//pair sum problem

// vector <int> pairsum(vector<int>arr,int target){
//     int st=0, end=arr.size()-1;
//     vector <int> ans;
//     while(st<end){
//         int currsum=arr[st]+arr[end];
//         if(currsum==target){
//             ans.push_back(st);
//             ans.push_back(end);
//             return ans;

//         }else if(currsum> target){
//             end--;
//         }else{
//             st++;
//         }
//     }
//     return ans;
// }
// int main(){
// vector <int> vec1={2,7,11,15};

// vector <int> vec3=pairsum(vec1,26);
// cout<<vec3[0]<<","<<vec3[1]<<endl;

//     return 0;
// }


int main(){

int n=4;
cout<<(n & 1)<<endl;
    return 0;
}