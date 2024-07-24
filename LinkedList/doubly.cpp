#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL; 
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
void print(Node*&head){
    //traversing a linked list
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//traversing and getting length of linked list
int getLength(Node*head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAtHead(Node*&head,int data){
    Node*temp=new Node(data); //step 1
    temp->next=head; //step 2
    head->prev=temp; //step 3
    head=temp; //step 4
}
void insertAtTail(Node*&tail,int data){
    Node*temp=new Node(data);   //step 1
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertAtPosition(Node*&head,Node*&tail,int position,int data){
    //start node insertion
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    Node*temp=head;
    //end node insertion
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }   
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node*nodeToInsert=new Node(data);
    nodeToInsert->prev=temp;
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
}
void deleteNode(Node*&head,int position,int data){
    //start node deletion
    if(position==1){
        Node*temp=head;
        temp -> next -> prev=NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    //middle node and last node delete
    else{
        Node*curr=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt < position){
            prev = curr;
            curr=curr->next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    print(head);
    cout<<getLength(head)<<endl;

    //insertion at start
    insertAtHead(head,9);
    insertAtHead(head,8);
    print(head);

    //insertion at tail
    insertAtTail(tail,11);
    insertAtTail(tail,13);
    print(head);

    insertAtPosition(head,tail,5,12);
    insertAtPosition(head,tail,1,7);
    print(head);

    deleteNode(head,7,13);
    print (head);

    deleteNode(head,3,9);
    print (head);    

    return 0;
}