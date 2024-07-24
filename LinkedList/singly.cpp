#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    //constructor
    Node(int data){
        this ->data=data;
        this ->next=NULL;
    }
    //destructor
    ~Node(){
        int value=this->data;
        // memory free
        if(this->next!=NULL){
            delete this;
            this->next=NULL;
        }
        cout<<"Memory free for node with data : "<<value<<endl;
    }
};
void insertAtHead(Node*&head,int data){
    Node*temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node*&tail,int data){
    Node*temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node*&tail,Node*&head,int position,int data){
    Node*temp=head;
    //insert at start
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    //insert at last
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return ;
    }
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node*nodeToInsert=new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void print (Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteNode(Node*&head,int position,int data){
    //start node deletion
    if(position==1){
        head=head->next;
        //free memory of start node
        delete head;
    }
    //middle node and last node delete
    else{
        Node*current=head;
        Node*previous=NULL;
        int cnt=1;
        while(cnt < position){
            previous = current;
            current=current->next;
            cnt++;
        }
        previous->next=current->next;
    }
}
int main(){
 
    Node*node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node*head=node1;
    Node*tail=node1;
    print(head);
    insertAtHead(head,9);
    print(head);
    insertAtTail(tail,12);
    print (head);
    insertAtPosition(tail,head,3,11);
    print(head);
    insertAtPosition(tail,head,1,8);
    print(head);
    insertAtPosition(tail,head,6,13);
    print(head);
    deleteNode(head,3,10);
    print(head);
    return 0;
}