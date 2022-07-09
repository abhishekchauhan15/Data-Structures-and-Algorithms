#include <bits/stdc++.h>
using namespace std;


struct Node{
   int data;
   struct Node *right;
   struct Node *left;

   Node(int val){
       data = val;
       left = right = NULL;
   }
};


Node* insert(Node* root, int data, int direction ){
    Node *newNode = new Node(data);
    root->direction = newNode;
}


Node * printTree(root){
    
    if(root==NULL)
        return;

    cout << root->data;

    if (root->left)
        print(root->left);
    
    if(root->right)
        print(root->right);
}

int main()
{

    //  Node *root = new Node(1);
    // // root->left = new Node(2);
    // // root->right =new Node(3);

    // insert(1, 2, right);

    // cout << printTree(root);

    return 0;
}