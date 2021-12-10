#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node * root=NULL;

struct node * create()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(node));
    int data;
    cout<<"Enter the data(Enter -1 for no data):";
    cin>>data;
    if(data==-1)
        return NULL;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    cout<<"Enter the left child of "<<data<<":  ";
    temp->left=create();
    cout<<"Enter the right child of "<<data<<":  ";
    temp->right=create();
    root=temp;
    return root;
}
void preorder(struct node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right); 
}
void inorder(struct node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right); 
}
void postorder(struct node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right); 
    cout<<root->data<<" ";
}
int main()
{
    create();
    cout<<"Preorder:";
    preorder(root);
    cout<<endl;
    cout<<"Inorder:";
    inorder(root);
    cout<<endl;
    cout<<"Postorder:";
    postorder(root);
    cout<<endl;
}