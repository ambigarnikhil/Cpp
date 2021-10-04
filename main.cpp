
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


