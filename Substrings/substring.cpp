#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void substring(string ip, string op)
{
    if(!ip.size())
    {
        cout<<op<<endl;
        return;
    }
    string op1=op;
    string op2=op+ip[0];
    ip.erase(ip.begin()+0);
    substring(ip,op1);
    substring(ip,op2);
    return ;
}

int main()
{
    string s="abc";
    string op="";
    substring(s,op);
}
