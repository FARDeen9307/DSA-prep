#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;



// //Backtracking on Array
// //print array before
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void back(int arr[],int n,int i){
//     if(i==n){
//         print(arr,n);
//         return;
//     }
//     arr[i]=i+1;
// back(arr,n,i+1);
// arr[i]=arr[i]-2;
// }

// //print array before


// int main(){
// int arr[5]={0};
// int n=5,i=0;
// back(arr,n,i);


// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

//     return 0;
// }



// //find subset

// void sub(string str,string subset,int n){
//     if(str.size()==0){
//         cout<<subset<<endl;
//         return;
//     }
//     char ch=str[0];


//     sub(str.substr(1,n-1),subset+ch,n);//yes

//     sub(str.substr(1,n-1),subset,n);
// }
// int main(){
// string str="abc";
// string subset="";

// int n=str.size();
// sub(str,subset,n);

//     return 0;
// }




// void sub(string str,string subset){


//     if(str.size()==0){
//         cout<<subset<<" ";
//         return;
//     }

//     char ch=str[0];
//     //yes

//     sub(str.substr(1,(str.size()-1)),subset+ch);

//     //no
//     sub(str.substr(1,(str.size()-1)),subset);
// }
// int main(){

// string str="abc";
// string subset="";

// sub(str,subset);
//     return 0;
// }



//find the subset

// void sub(string str,string subset){
//     if(str.size()==0){
//         cout<<'('<<subset<<')'<<" ";
//         return;
//     }

//     char ch=str[0];
//     //yes
//     sub(str.substr(1,(str.size()-1)),subset+ch);

//     //no
//     sub(str.substr(1,(str.size()-1)),subset);
// }


// int main(){

// string str="abc";
// string subset="";

// sub(str,subset);
//     return 0;
// }

// //permutation
// void print(string sub,string ans){
//     if(sub.size()==0){
//         cout<<ans<<" ";
//         return ;
//     }

//     for(int i =0; i<(sub.size());i++) {
//         char ch=sub[i];
//         string nex= sub.substr(0,i)+sub.substr(i+1,(sub.size()-i-1));
//            print(nex,ans +ch);
        

//     }
// }


// int main(){

// string sub="abc";
// string ans= "";
// print(sub,ans);

//     return 0;
// }



// Nqueen problem 

// void print(vector <vector<char>>& d1,int n){

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){

//             cout<<d1[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pu(vector<vector<char>>& d1,int n) {
//     for(int i=0;i<n;i++){

//         vector <char>newVect;
//         for(int j=0;j<n;j++){
//             newVect.push_back('*');


//         }
//         d1.push_back(newVect);
//     }
// }

//NQueen

// void print(vector <vector<char>>& d1){
// int n=d1.size();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){

//             cout<<d1[i][j]<<" ";
//         }
//         cout<<endl;
        

//     }

//     cout<<"-----------------------"<<endl;
// }

// //is Safe
// bool isSafe(vector<vector<char>> &d1,int row,int j){
//     int n=d1.size();
//     //horizontal
//     for(int j=0;j<n;j++){
//         if(d1[row][j]=='Q')
//         return false;
//     }
//     //vertical
//     for(int ro=0;ro<row;ro++){
//         if(d1[ro][j]=='Q')
//         return false;

//     }

//     //diago
//     for(int i=row ,f=j;i>=0&&f>=0;i--,f--){
//         if(d1[i][f]=='Q')
//         return false;

//     }

// }

  
// void nQueen(vector <vector<char>> &d1,int row){

//     int n=d1.size();
//     if(row==n){

//         print(d1);
//         return;
//     }

//     for(int j=0;j<n;j++){
//         if(isSafe(d1,row,j)) { 
//         d1[row][j]='Q';
//         nQueen(d1,row+1);
//         d1[row][j]='.';
//         }
//     }
// }

// int main(){

// vector <vector<char>>d1;

// int n=4;
// for(int i=0;i<n;i++){

//     vector<char> newRow;
//     for(int j=0;j<n;j++){

//         newRow.push_back('.');
//     }
//     d1.push_back(newRow);
// }
// nQueen(d1,0);

// // print(d1,2);

//     return 0;
// }



// #include<iostream>
// #include<iomanip>
// #include<cmath>
// #include<algorithm>
// #include<vector>
// #include<string>

// using namespace std;
// bool isSafe(vector<vector<char>> vec,int row,int col){
//     int n=vec.size();
//     //horizontal safety
//     for(int i=0;i<n;i++){
//         if(vec[row][i]=='Q'){
//             return false;
//         }
//     }

//     //vertical
//     for(int j=0;j<n;j++){
//         if(vec[j][col]=='Q'){
//             return false;
//         }
//     }

//     //left diagonal
//     for(int i=row,j=col;i>=0 &&j>=0;i--,j--){
//         if(vec[i][j]=='Q'){
//             return false;
//         }
//     }

//     //right diagonal
//     for(int i=row,j=col;i>=0 &&j<n;i--,j++){
//         if(vec[i][j]=='Q'){
//             return false;
//         }
//     }

//     return true;


// }

// void printBoard(vector<vector<char>> vec){

//     int n= vec.size();
//     for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){

//         cout<<vec[i][j]<<" ";
//     }
   
//     cout<<endl;
    
// }
// cout<<"-------------------"<<endl;
// }
// void nQueen(vector<vector<char>> vec,int row){

//     int n=vec.size();
//     if(row==n){
//         printBoard(vec);
//         return ;
//     }

//     for(int j=0;j<n;j++){
      
//         if(isSafe(vec,row,j)){

        

        
//             vec[row][j]='Q';
//             nQueen(vec,row+1);
            
//             vec[row][j]='.';
//     }

    


       
//     }
    
// }
// int main(){

// vector<vector<char>> vec;
// int n=4;
// for(int i=0;i<n;i++){
//     vector<char> newRow;
//     for(int j=0;j<n;j++){
//         newRow.push_back('.');
//     }
//     vec.push_back(newRow);
// }
// nQueen(vec,0);


//    return 0;
// }



// //Grid Ways problem 
// int ways(int cRow,int cCol,int m,int n){

//     if(cRow==(m-1)&&cCol==(n-1)){
//         return 1;
//     }
//     if(cRow>=m || cCol>=n){
//         return 0;
//     }


//      int val1=ways(cRow,cCol+1,m,n);
//      int val2=ways(cRow+1,cCol,m,n);

//     return val1+val2;
// }
// int main(){

// cout<<ways(0,0,2,2)<<endl;
    
//     return 0;
// }


//sodoku

void printSodoku(int sodoku[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<sodoku[i][j]<<" ";
        }
        cout<<endl;
    }
}




//sodu solver
bool soduS(int arr[9][9],int Crow,int Ccol){
    //base case 
    if(Crow==9){
   printSodoku(arr);
        return true;
    }


    int nextRow= Crow;
    int nextCol= Ccol+1;
    if(Ccol==8){
        nextRow= Crow+1;
        nextCol= 0;
    }

    if((arr,nextRow,nextCol)){

    }
}
int main(){
    int sudoku[9][9] = {
    {0, 0, 8, 0, 0, 0, 0, 0, 0},
    {4, 9, 0, 1, 5, 7, 0, 0, 2},
    {0, 0, 3, 0, 0, 4, 1, 9, 0},
    {1, 8, 5, 0, 6, 0, 0, 2, 0},
    {0, 0, 0, 0, 2, 0, 0, 6, 0},
    {9, 6, 0, 4, 0, 5, 3, 0, 0},
    {0, 3, 0, 0, 7, 2, 0, 0, 4},
    {0, 4, 9, 0, 3, 0, 0, 5, 7},
    {8, 2, 7, 0, 0, 9, 0, 1, 3}
};

    return 0;
}