#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(node*root){
    cout<<"enter data : "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"enter data for inserting in left of : "<<data<<endl;
    cout<<"enter data for inserting in left of : "<<data<<endl;
    cout<<"enter data for inserting in left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter data for inserting in right of : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelOrderTraversal(node* root){ //1
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){ //purana level traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }  
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
       
    }
}
void reverseOrderTraversal(node* root){ //2
    stack<node*>s;
    queue<node*>q;
    q.push(root);
    node*temp;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        s.push(temp);      
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    while(!s.empty()){
        temp=s.top();
        cout<<temp->data<<" ";
        s.pop();
    }
}
void inOrder(node* root){ //3
    //base case
    if(root == NULL){
        return;
    }
    inOrder(root->left);   //L
    cout<<root->data<<" "; //N
    inOrder(root->right);  //R
}
void preOrder(node* root){ //4
    //base case
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";  //N
    preOrder(root->left);   //L
    preOrder(root->right);  //R

}
void postOrder(node* root){ //4
    //base case
    if(root == NULL){
        return;
    }
    postOrder(root->left);   //L
    postOrder(root->right);  //R
    cout<<root->data<<" ";  //N
}
void bulidFromLevelOrder(node* root){
    queue<node*>q;
    cout<<"enter data for root : ";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node data for "<<temp->data<<": ";
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node data for "<<temp->data<<": ";
        int rightData;
        cin>>rightData;

        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
}
int main(){
    node* root = NULL;
/*.
    //creating a Tree
    root=buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Level order traversal : "<<endl;
    levelOrderTraversal(root);
    
    cout<<"reverse order traversal : ";
    reverseOrderTraversal(root);
    cout<<endl;
    
    cout<<"inorder : ";
    inOrder(root);
    cout<<endl;

    cout<<"preOrder : ";
    preOrder(root);
    cout<<endl;

    cout<<"PostOrder : ";
    postOrder(root);
    cout<<endl;
*/
    bulidFromLevelOrder(rootf);
    levelOrderTraversal(root);

    return 0;
}