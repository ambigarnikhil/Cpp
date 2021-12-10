#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;

struct node * create(int x)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(node));
    temp->data=x;
    temp->left=nullptr;
    temp->right=nullptr;
    return temp;
}
struct node * insert(struct node *root, int a)
{
    if(root==NULL)
        return create(a);
    else if(a>root->data)
        root->right=insert(root->right,a);
    else
        root->left=insert(root->left,a);
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

int main()
{
    root=create(10);
    root=insert(root,5);
    root=insert(root,15);
    preorder(root);
}