#include <iostream>
using namespace std;

void HOI(int n,char source,char dest,char aux){
    if(n==1){
        cout<<source<<"--->"<<dest<<endl ;
        return;
    }
    else{
        HOI(n-1,source,aux,dest);
       cout<<source<<"--->"<<dest<<endl;
        HOI(n-1,aux,dest,source);
    }
}
int main(){
//tower of how noi
int n;
cout<<"enetr the no of disk"<<endl;
cin>>n;
HOI(n,'A','C','B');


    return 0;
}