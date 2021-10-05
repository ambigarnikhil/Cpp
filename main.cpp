
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

/*
#include<unordered_map>
int main()
{
    string s="I want to play circket";
    string temp="";
    int j=0;
    unordered_map<int,string> omap;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            omap[j++]=temp;
            temp="";
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    omap[j]=temp;
    while(j>=0)
    {
        cout<<omap[j]<<" ";
        j--;
    }
}
//op:circket play to want I
*/

/*
int anagram(string s1,string s2)
{
    int len1=s1.length();
    int len2=s2.length();
    if(len1!=len2)
    {
        return 0;
    }
    else
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        for(int i=0;i<len1;i++)
        {
            if(s1[i]==s2[i])
            {
                continue ;
            }
            else
            {
                return 0;
            }
        }
        return 1;
        
       if(s1==s2)
       {
           return 1;
       }
       else{
           return 0;
       }
    }
}

int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    int c = anagram(s1,s2); 
    cout<<c<<endl;
}
*/

/*
void pattern(int *n)
{
    for(int i=1;i<=(*n);i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    pattern(&n);
}
*/

/*
int main()
{
    double a;
    cin>>a;
    int temp=a;
    cout<<temp<<" ";
    a=a-temp;
    cout<<a;
}
*/
