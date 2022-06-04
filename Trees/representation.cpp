#include<iostream> 
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

 int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);


    return 0;
}