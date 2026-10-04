# include <iostream>
using namespace std;
// int maxsum=INT16_MIN;
// int sum=0;

// int maxsuum(int *sell,int n){
// int buy[100000];
// buy[0]=INT16_MAX;
// int maxprofit=0;

// for(int i=1;i<n;i++){
//     buy[i]=min(buy[i-1],sell[i-1]);

// }
// int currprofit=0;
// for(int i=0;i<n;i++){
//     currprofit= sell[i]-buy[i];
//     maxprofit= max(maxprofit,currprofit);
// }

// return maxprofit;

// }



void trapped(int *arr,int n){
    int left[100000],right[20000];
    right[n-1]=arr[n-1];
    left[0]=arr[0];
    //for left
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i-1]);
    }
    //right side bars 
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i+1]);
    }



    // //left side bars 
    for(int i=0;i<n;i++){
        cout<<left[i]<<" ";
    }cout<<endl;

     //right  side bars 
    for(int i=0;i<n;i++){
        cout<<right[i]<<" ";
    }


    //calcualte the minimum 
     int min1;
     int trap=0,sum=0;
    for(int i=0;i<n;i++){
       min1=min(left[i],right[i])-arr[i];
       if(min1>0){
        trap +=min1;
       }
       
       


        
    }
    cout<<"the sum is"<<trap;
}


int main(){


int sell[7]={4,2,0,6,3,2,5};
int n=sizeof(sell)/sizeof(int);
trapped(sell,n);








  
    

    return 0;
}

