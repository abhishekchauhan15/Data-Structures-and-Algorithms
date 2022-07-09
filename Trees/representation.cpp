#include<bits/stdc++.h> 
using namespace std;

//class with name Node
// class is bacically a cusotm data type 

struct Node{
    //objects 
    int data;
    struct Node *left;
    struct Node * right;

    // constructor 
    // constructor is a special member function with the same name as of it's class 
    // it is used to intitilized the objects in it's class
    // it is automatically invoked(called) whenever an object is created

    Node (int val){
        data = val;
        left = right = NULL;
    }
};


void inorder(Node *root){

    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void itInorder(Node * root){
    stack<Node *> st;

    if(root)
        st.push(root->data);

    while(root){
         if(root->left){
            root = root->left;
            st.push(root->data);
         }
    }

}

void preorder(Node *root){

    if(root==NULL)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(Node *root){

    if(root==NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}




 int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);

    // inorder(root);
    preorder(root);
    // postorder(root);


    return 0;
}