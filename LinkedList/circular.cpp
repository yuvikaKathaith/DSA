#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value=this->data;
        // memory free
        if(this->next!=NULL){
            delete this;
            this->next=NULL;
        }

    }
};    
void print(Node*&tail){
    if(tail==NULL){
        cout<<"list is empty";
        return;
    }
    Node*temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=tail);
    cout<<endl;
}
void insertNode(Node*&tail,int element,int data){
    //if list is empty
    if(tail==NULL){
        Node*temp=new Node(data);
        tail=temp;
        temp->next=temp;
    }
    //if list is non empty
    else{
        //traversing the list and finding the element after which the new node is to put
        Node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element found
        Node*temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
        
    }  
}
void deleteNode(Node*&tail,int value){
    //list is empty
    if(tail==NULL){
        return;
    }
    //middle node and last node delete
    else{
        Node*prev=tail;
        Node*curr=prev->next;
        while(curr->data!=value){
            prev = curr;
            curr=curr->next;
        }
        //1 node LL
        if(curr==prev){
            tail=NULL;
        }

        //>=2 node LL
        prev -> next = curr -> next;
        if(tail==curr){
            tail=prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}
int main(){
    Node*tail=NULL;

    //insertion
    insertNode(tail,1,11);
    print(tail);
    insertNode(tail,11,12);
    print(tail);
    insertNode(tail,12,13);
    print(tail);
    insertNode(tail,11,14);
    print(tail);

    //deletion
    deleteNode(tail,13);
    print (tail);
    deleteNode(tail,14);
    print (tail);  
    deleteNode(tail,12);
    print (tail);    
    deleteNode(tail,11);
    print (tail);  

    return 0;
}