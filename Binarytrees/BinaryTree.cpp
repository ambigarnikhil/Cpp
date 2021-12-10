#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
void preorder(struct node * temp)
{
    struct node *root=temp;
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node * temp)
{
    struct node *root=temp;
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(struct node * temp)
{
    struct node *root=temp;
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
struct node * create()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(node));
    int data;
    cout<<"Enter the data(Enter -1 for no node):";
    cin>>data;
    if(data==-1)
    {
        return 0;
    }
    temp->data=data;
    cout<<"Enter the left child of "<<data<<":";
    temp->left=create();
    cout<<"Enter the right child of "<<data<<":";
    temp->right=create();
    root=temp;
    return temp;
}
int main()
{
    create();
    cout<<"Preorder is: ";
    preorder(root);
    cout<<"Inorder is: ";
    inorder(root);
    cout<<"Postorder is: ";
    postorder(root);
}