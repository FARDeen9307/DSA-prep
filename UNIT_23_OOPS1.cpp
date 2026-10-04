#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//Constructor brief 

// class Student{
//     public:
//    string name;
//     float cgpa;
//     void getPercentage(){
//     cout<<(cgpa*10)<<endl;
// }
// Student(string name,float cgpa){
//     this->name=name;
//     this->cgpa=cgpa;
//     cout<<"constructor is invoke "<<endl;
// }
// void getname(){
//     cout<<name;
// }

// };
// int main(){
    
//     Student s1("fardeen", 9.5);
//     s1.getname();
    
//     return 0;
// }



//Setter and getter 
// class Student{
// string name="fardeen";
// int Roll=123;



// public:
// Student(){
//    cout<<"hi i am default costructor"<<endl;
// }
// //setter
// void setName(string name){
//    this->name=name;

// }

// string getName(){
//    cout<<name;
//    return name;
// }

// void admit(){
//    cout<<"student admitted sucessfully"<<endl;
// }
// };
// int main(){


//   Student s1;
 
//    return 0;
// }


//shallow and deep copy
// class Car{
//    string name="farden";
//    int speed=100;
//    public:
  
//    int *mil;
// Car(string name,int speed){

//    this->name=name;
//    this->speed=speed;
//    mil= new int;
//    *mil=12;
// }

// //manual copy custom
// //for deep copy we create custom constructor and allocate new memory
// Car(Car &Original){

//    name= Original.name;
//    speed= Original.speed;
//    mil=Original.mil;
//    //mil= new int;
//    //mil=*original.mil;
   


// }
// //get 
// string getName(){
//    return name;
// }




// //Destructor use for deallocate dynamic memory when program end;
// ~Car(){

//    cout<<"deleteing constructor"<<endl;
//    if(mil !=NULL){
//       delete mil;
//       mil=NULL;

//    }
// }


// };
// int main(){
// Car s1("fardeen",100);
// Car s2(s1);
// cout<<s2.getName();
// //above i have change mil value in s2 in s1 it automatic
// *s2.mil=10;
// cout<<*s2.mil<<endl;
// cout<<*s1.mil<<endl;

// *s2.mil=10;
//    return 0;
// }




//2. INHERITANCE;



//3. polymorphism;

//function overriding 
class Parent{
   public:
void show(){
   cout<<"hell in parent "<<endl;
}
};

class Child :public  Parent{
   public:
   void show(){
      cout<<"hell in child "<<endl;
   }

};
int main(){

Child st;
Parent st2;
st.show();
st.show();


   return 0;
}

