
/*
//Dynamic memory allocation for 1-D array
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
// ::->scope resolution operator
int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/

/*
//Dynamic memory allocation for 2-D array
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows and columns:";
    cin>>m>>n;
    int **arr;
    arr=(int **)malloc(m*sizeof(int *));
    for(int i=0;i<m;i++)
    {
        arr[i]=(int *)malloc(n*sizeof(int));
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Array is:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/

/*
//structures
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
struct car
{
    int a;
    char b;
};
int main()
{
    struct car c1;
    cout<<sizeof(c1)<<endl;
}
//op: 8
*/

#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
//important concept
//we can't assign string directly to the structure object so we use temp char arr and use strcpy.
struct car
{
    int a;
    char b;
    char c[5];
};
int main()
{
    struct car c1;
    cout<<sizeof(c1)<<endl;
    c1.a=10;
    c1.b='n';
    char temp[5]="nikh";
    strcpy(c1.c,temp);
    cout<<c1.a<<"="<<c1.b<<"->"<<c1.c<<endl;
}
*/

/*
we can assign values to arrays only during declaration.
int arr[5]={1,2,3,4,5} -> correct
int arr[5];
arr[5]={1,2,3,4,5}; ->wrong
*/

/*
#include<string>
struct car
{
    int a;
    char b;
    string c;
};
int main()
{
    struct car c1;
    cout<<sizeof(c1)<<endl;
    c1.a=10;
    c1.b='n';
    c1.c="Nikhil";
    cout<<c1.a<<"="<<c1.b<<"->"<<c1.c<<endl;
}
*/
/*
#include<string>
struct car
{
    string c;
};
int main()
{
    struct car c1;
    cout<<sizeof(c1)<<endl;
}
//op:32
*/

/*
#include<string>
struct car
{
    int a;
    char b;
    char c[8];
};
int main()
{
    struct car c1;
    cout<<sizeof(c1)<<endl;
}
//it should be 13 but we can access the address in multiples of 4.
//op:16
*/


/*
union car
{
    int a;
    char b;
    float c;
    double d;
};
int main()
{
    union car c1;
    cout<<sizeof(c1)<<endl;
}
//op:8
*/