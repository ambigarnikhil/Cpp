#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;

void append(int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p=root;
        while(p->right!=NULL)
        {
            p=p->right;
        }
        temp->left=p;
        p->right=temp;
    }
}
void insert(int data, int loc)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    int i=1;
    struct node *p=root; 
    struct node *q;
    while(i<loc-1)
    {
        p=p->right;
        i++;
    }
    q=p->right;
    temp->left=p;
    temp->right=q;
    q->left=temp;
    p->right=temp;
}
void display(struct node *root)
{
    if(root==NULL)
        cout<<"Empty\n";
    else{
        struct node *p=root;
        while(p!=NULL)
        {
            cout<<p->data<<"->";
            p=p->right;
        }
        cout<<endl;
    }

}
int length(struct node *root)
{
    int len=0;
    if(root==NULL)
        return 0;
    else{
        struct node *p=root;
        while(p!=NULL)
        {
            len++;
            p=p->right;
        }
        return len;
    }
}
void deleteatbegin()
{
    if(root==NULL)
        cout<<"DoubleLinkedList is empty\n";
    else
    {
        struct node *p=root;
        root=p->right;
        root->left=NULL;
        p->right=NULL;
        free(p);
    }

}
void deleteatloc(int loc)
{
    int i=1;
    struct node *p, *q, *r;
    p=root;
    while(i<loc-1)
    {
        p=p->right;
        i++;
    }
    q=p->right;
    r=q->right;
    r->left=p;
    p->right=r;
    q->left=NULL;
    q->right=NULL;
    free(q);
    display(root);

}
void reverse(int len)
{
    struct node *p=root;
    int k=0,i=0;
    int j=len-1;
    while(k<len/2)
    {
        struct node *q=root;
        while(i<j)
        {
            q=q->right;
            i++;
        }
        int temp=p->data;
        p->data=q->data;
        q->data=temp;
        k++;
        p=p->right;
        i=0;j--;
    }
}
int len;
int main()
{
    cout<<"Double Linked List Operations"<<endl;
    int ch;
    while(1)
    {
        cout<<"1.Append\n";
        cout<<"2.Insert at given location\n";
        cout<<"3.Display\n";
        cout<<"4.Length\n";
        cout<<"5.Delete at beginining\n";
        cout<<"6.Delete at given location\n";
        cout<<"7.Reverse\n";
        cout<<"8.Exit\n";
        cout<<"Enter Your operation:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: int temp;
                    cout<<"Enter the value to be appended:";
                    cin>>temp;
                    append(temp);
                    break;
            case 2: int a,loc;
                    cout<<"Enter the location:";
                    cin>>loc;
                    if(loc>length(root))
                    {
                        cout<<"Enter the valid location";
                        break;
                    }
                    else{
                        cout<<"Enter the value to be inserted at "<<loc<<" location:";
                        cin>>a;
                        insert(a,loc);
                        break;
                    }
            case 3: cout<<"The DoubleLinkedList is: ";
                    display(root);
                    break;
            case 4: cout<<"The length of the Double linked List is: "<<length(root)<<endl;
                    len=length(root);
                    break;
            case 5: deleteatbegin();
                    display(root);
                    break;
            case 6: int x;
                    cout<<"enter the location:";
                    cin>>x;
                    deleteatloc(x);
                    break;
            case 7: reverse(len);
                    display(root);
                    break;
            case 8: exit(1);

            default: cout<<"Enter the valid choice"<<endl;

        }
    }
}