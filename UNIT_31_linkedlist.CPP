#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

class Node{

    public:
    int data;
    Node*next;
        Node(int val){
            data=val;
            next=NULL;
        }

    // ~Node(){
    //     cout<<"Node destructor"<<endl;
    //     if(next!=NULL){
    //         delete next;
            
    //     }
    // }    
};

class List{
    Node*Head;
    Node*tail;
    public:
    List(){
        Head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        Node*newNode= new Node( val);
    

    if(Head==NULL){
        Head=tail=newNode;

    }
    else{
        newNode->next = Head;
        Head=newNode;
    }
    }


    void push_back(int val){
        Node*newNode= new Node( val);
        if(Head==NULL){
            Head=tail=NULL;

        }

        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void printList(){
        Node*temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<" ->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void midd(int val,int pos){
        Node*temp=Head;
        int count=0;
        while(temp!=0){
            temp=temp->next;
            count++;
            if(count==(pos-1)){
                 Node*newNode= new Node( val);
                 newNode->next=temp->next;
                 temp->next=newNode;


            }
        }
    }

    void popFront(){
        Node*temp=Head;
        Head=temp->next;
        delete temp;
    }

    //search for key
    int search(int key){
        int pos=0;
        Node*temp;
        temp=Head;
        while(temp!=NULL){
           
            if(temp->data==key){
                return pos;
            }
             temp=temp->next;
            pos++;

        }

        return -1;
    }

    // ~List(){
    //     cout<<"list destructor"<<endl;
    //     if(Head!=NULL){
    //         delete Head;
    //         Head= NULL;
    //     }
    // }
};
int main(){

List ll;
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);

ll.push_back(4);
ll.push_back(5);
ll.printList();
ll.midd(6,2);
ll.printList();
// ll.popFront();
// ll.printList();
cout<<ll.search(4)<<endl;






return 0;
}