#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

struct node{
    int data;
    struct node *link;
};
struct node *root=NULL;

void append(int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(node));
    temp->data=data;
    temp->link=NULL;
    if(root==NULL)
        root=temp;
    else{
        struct node *p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
void insert(int data,int loc)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(node));
    temp->data=data;
    temp->link=NULL;
    if(!loc)
    {
        temp->link=root;
        root=temp;
    }
    else{
        int i=1;
        struct node *p=root;
        while(i<loc-1)
        {
            p=p->link;
        }
        temp->link=p->link;
        p->link=temp;
    }
}
void display(struct node *root)
{
    if(root==NULL)
        cout<<"Empty"<<endl;
    else{
        struct node *p=root;
        while(p!=NULL)
        {
            cout<<p->data<<"->";
            p=p->link;
        }
        cout<<endl;
    }

}
int length(struct node *root)
{
    if(root==NULL)
        return 0;
    else{
        int loc;
        struct node *p=root;
        while(p!=NULL)
        {
            loc++;
            p=p->link;
        }
        return loc;
    }
    
 
}
void deleteatbegin()
{
    if(root==NULL)
    {
        cout<<"Invalid, Linked list is empty."<<endl;
    }
    else{
        struct node *p=root;
        root=p->link;
        p->link=NULL;
        free(p);
    }
}
void deleteatloc(int loc)
{
    int i=1;
    struct node *p=root;
    while(i<loc-1)
    {
        p=p->link;
    }
    struct node *q=p->link;
    p->link=q->link;
    q->link=NULL;
    free(q);
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
            q=q->link;
            i++;
        }
        int temp=p->data;
        p->data=q->data;
        q->data=temp;
        k++;
        p=p->link;
        i=0;j--;
    }
}
int len;
int main()
{
    cout<<"Linked List Operations"<<endl;
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
            case 3: cout<<"The LinkedList is: ";
                    display(root);
                    break;
            case 4: cout<<"The length of the linked List is: "<<length(root)<<endl;
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
            case 7: display(root);
                    reverse(len);
                    display(root);
                    break;
            case 8: exit(1);

            default: cout<<"Enter the valid choice"<<endl;

        }

    }
}