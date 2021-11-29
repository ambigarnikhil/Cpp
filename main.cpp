
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

/*
int main()
{
    int a[5][5]={11,3,5,6,9,
                12,4,7,8,10,
                10,5,6,9,11,
                8,6,4,7,2,
                15,10,11,20,25};
    int row[5],column[5];
    int x=0;
    for(int i=0;i<5;i++)
    {
        int max=a[i][0];
        for(int j=0;j<5;j++)
        {
            if(a[i][j]>=max)
            {
                row[x]=j+1;
                temp=a[i][j];
            }
        }
        x++;
    }
    int y=0;
    for(int j=0;j<5;j++)
    {
        int temp=a[0][j];
        for(int i=0;i<5;i++)
        {
            if(a[i][j]<=temp)
            {
                column[y]=i+1;
                temp=a[i][j];
            }
        }
        y++;
    }
    for(int i=0;i<5;i++)
    {
        cout<<row[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<column[i]<<" ";
    }
    cout<<endl;
    
}
*/

/*
#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        //cout<<i<<"  "<<i%k<<endl;
        if(i>9 && i%k!=0)
        {
            int temp=0;
            int c=i;
            while(c>0)
            {
                int a=c%10;
                temp+=a;
                c=c/10;
            }
            if(temp%k==0)
            {
                count++;
            }
        }
    }
    cout<<count;
}
/*
/*
if(i>9 && i%k!=0)
        {
            int temp=0;
            while(i>0)
            {
                int a=i%10;
                temp+=a;
                i=i/10;
            }
            if(temp%k==0)
            {
                count++;
            }
        }
        */
/*
int main()
{
    int n=1215598;
    int temp=n;
    int len=0;
    while(temp>0)
    {
        len++;
        temp=temp/10;
    }
    cout<<"len= "<<len<<endl;
    int count=0;
    int i=1;
    while(n>0)
    {
        int a=n;
        cout<<a<<endl;
        while(a>0)
        {
            if(a%11==0)
            {
                count++;
            }
            a=a/10;
        }
        n=n-pow(10,len-i);
        i++;
    }
    cout<<count;
}
*/


/*
#include <iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    int n=1215598;
    int temp=n;
    int len=0;
    while(temp>0)
    {
        len++;
        temp=temp/10;
    }
    cout<<"len= "<<len<<endl;
    cout<<n<<endl;
    int count=0;
    int i=1;
    while(n>0)
    {
        int a=n,c=n;
        cout<<a<<endl;
        while(a>0)
        {
            if(a%11==0)
            {
                count++;
            }
            a=a/10;
        }
        int b=pow(10,len-i);
        while(c>0 && c<10)
        {
            c=c/10;
        }
        n=n-(b*c);
        i++;
    }
    cout<<count;

}
*/
/*
#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    string s="i love my india";
    string a="";
    unordered_map<int,string> omap;
    int x=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            omap[x++]=a;
            a="";
        }
        else{
            a+=s[i];
        }
    }
    omap[x]=a;
    while(x>=0)
    {
        cout<<omap[x]<<" ";
        x--;
    }
}
*/

/*
#include<bits/stdc++.h>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    char s1[10];
    scanf("%[^\n]",s1);
    strlwr(s1);
    int len=strlen(s1);
    int i=0,j=len-1;
    while(i<j)
    {
        if(s1[i]!=s1[j])
        {
            cout<<"Not a palindrome\n";
            exit(1);
        }
        i++;
        j--;
    }
    cout<<"Palindrome";
    
}
*/

#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

/*
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);

}
*/
/*
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int n=5;
    cout<<factorial(5);
}
*/
/*
int power(int n, int i)
{
    if(i==1)
    {
        return n;
    }
    else
    {
        return n*power(n,i-1);
    }
}
int main()
{
    int n=3;
    int i=4;
    cout<<power(3,4);
}
*/
/*
int main()
{
    int n=1234;
    int a=0;
    int temp=n;
    while(temp>0)
    {
        int b;
        b=temp%10;
        a=a*10+b;
        temp=temp/10;
    }
    cout<<a;
}
*/

/*
int main()
{
    string s="Move#Hash#to#Front";
    int len =s.length();
    string temp="";
    int i, count=0;
    while(s[i]!='\0')
    {
        if(s[i]=='#')
        {
            count++;
        }
        i++;
    }
    while(count>0)
    {
        temp+='#';
        count--;
    }
    for(int i=0;i<len;i++)
    {
        if(s[i]!='#')
        {   
            temp+=s[i];  
        }
    }
    cout<<temp;
}
*/

/*
//aabbbbeeeeffggg
//a2b4e4f2g3
int main()
{
    //string s="aabbbbeeeeffggg";
    string s="abbccccc";
    unordered_map<char,int> omap;
    int i=0;
    while(s[i]!='\0')
    {
        omap[s[i]]+=1;
        i++;
    }
    int j=0;
    while(s[j]!='\0')
    {
        if(s[j]!=s[j+1])
        {
            if(omap[s[j]]==1)
            {
                cout<<s[j];
            }
            else{
                cout<<s[j]<<omap[s[j]];
            }
            
        }
        j++;
    }
}
*/

/*
int main()
{
    int a[10]={1,2,3,3,4,1,4,5,1,2};
    int len=sizeof(a)/sizeof(a[0]);
    unordered_map<int,int> omap;
    for(int i=0;i<len;i++)
    {
        omap[a[i]]+=1;
    }
    sort(a,a+len);
    for(int i=0;i<len;i++)
    {
        if(a[i]!=a[i+1])
        {
            cout<<a[i]<<" occurs "<<omap[a[i]]<<" times"<<endl;
        }
    }
}
*/

/*
int main()
{
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        int sum=0;
        sum=a[i][0]*4+a[i][1]*2;
        cout<<sum<<endl;
    }
}
*/

#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
/*
int main()
{
    string a="nikhil";
    int len= a.length();
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<=len-i;j++)
        {
            cout << a.substr(i, j) << endl;
        }
    }
}
*/
/*
int main()
{
    string s="lmnop";
    string temp=s;
    int i=0,j=s.length()-1;
    while(i<j)
    {
        char a=temp[i];
        temp[i]=temp[j];
        temp[j]=a;
        i++;
        j--;
    }
    cout<<temp;
    vector<int> m;
    for(int i=0;i<s.length()-1;i++)
    {
        int a1=s[i+1];
        int a2=s[i];
        m[i]= a2-a1; 
    }
    for(int i=0;i<s.length()-1;i++)
    {
        cout<<m[i]; 
    }
}
*/
/*
int main()
{

    string s="nikhil";
    stack<int> nik;
    for(int i=0;i<s.length();i++)
    {
        cout<<nik.top()<<endl;
        if(i==0)
        {
            nik.push(s[i]);
        }
        else
        {
            if(s[i]==nik.top())
            {
                nik.pop();
            }
            else
            {
                nik.push(s[i]);
            }
        }
    }
}
*/


#include<iostream>
#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;
/*
void display(vector<int> temp)
{
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}
int binarysearch(vector<int> temp,int start,int end,int n)
{
    if(end>=start)
    {
        int mid=(start+end)/2;
        if(temp[mid]==n)
        {
            return mid;
        }
        else{

            if(n>temp[mid])
            {
                return binarysearch(temp,mid+1,end,n);
            }
            return binarysearch(temp,start,mid-1,n);
        }
    }
    return -1;

}
int main()
{
    vector<int> temp;
    for(int i=50;i>=10;i-=10)
    {
        temp.push_back(i);
    }
    display(temp);
    sort(temp.begin(),temp.end());
    display(temp);
    int n;
    cout<<"Enter the element to search:\n";
    cin>>n;
    cout<<binarysearch(temp,0,4,);

}
*/
/*
#include <map>
void display(vector<int> temp)
{
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> a;
    a.push_back(9);
    a.push_back(8);
    a.push_back(7);
    a.push_back(4);
    a.push_back(7);
    a.push_back(5);
    a.push_back(5);
    a.push_back(2);
    a.push_back(1);
    a.push_back(1);
    map<int, int> omap;
    for(int i=0;i<a.size();i++)
    {
        omap[a[i]]++;
    }
    display(a);
    a.clear();
    display(a);
    map<int,int> ::iterator it;
    for(it=omap.begin();it!=omap.end();it++)
    {
        for(int i=0;i<it->second;i++)
        {
            //cout<<it->first<<" ";
            a.push_back(it->first);
        }
    }
    display(a);
}
*/

/*
void display(int **arr,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int diagonalsum(int **arr,int m)
{
    int sum=0;
    for(int i=0;i<m;i++)
    {
        sum+=arr[i][i];
    }
    return sum;
}
int main()
{
    int m,n;
    cout<<"Enter row value:\n";
    cin>>m;
    cout<<"Enter column value:\n";
    cin>>n;
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
    display(arr,m,n);
    cout<<endl;
    if(m==n)
    {
        cout<<diagonalsum(arr,m);
    }
    else
    {
        if(m<n)
        {
            int k=n;
            int **temp;
            temp=(int **)malloc(k*sizeof(int *));
            for(int i=0;i<k;i++)
            {
                temp[i]=(int *)malloc(k*sizeof(int));
            }
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    temp[i][j]=arr[i][j];
                }
            }
            for(int i=m;i<k;i++)
            {
                for(int j=0;j<n;j++)
                {
                    temp[i][j]=1;
                }
            }
            display(temp,k,k);
            cout<<diagonalsum(temp,k);
        }
        else
        {
            int k=m;
            int **temp;
            temp=(int **)malloc(k*sizeof(int *));
            for(int i=0;i<k;i++)
            {
                temp[i]=(int *)malloc(k*sizeof(int));
            }
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    temp[i][j]=arr[i][j];
                }
            }
            for(int i=0;i<m;i++)
            {
                for(int j=n;j<k;j++)
                {
                    temp[i][j]=1;
                }
            }
            display(temp,k,k);
            cout<<diagonalsum(temp,k);
        }
    }
}
*/
/*
int lem(int m,int n)
{
    if(m==n)
        return m;
    else if(m<n)
        return m;
    else
        return n;
}
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int a=lem(m,n);
    int sum=0;
    for(int i=0;i<a;i++)
        sum+=arr[i][i];
    int k= m>n ? (m-n):(n-m);
    while(k)
    {
        sum+=1;
        k--;
    }
    cout<<"sum:"<<sum<<endl;
}
*/

int main()
{
    int a=5;
    int pos=2;
    int i=1<<pos;
    //0101 & 0100
    cout<<a&i;
}