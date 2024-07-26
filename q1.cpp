//Longest Common Subsequence
#include<bits/stdc++.h>
using namespace std;
int myFun(string str1,string str2,int x,int y)
{
    if(x == 0 || y == 0)
    {
        return 0;
    }
    if(str1[x-1] == str2[y-1])
    {
        return 1 + myFun(str1,str2,x-1,y-1);
    }
    else 
    {
        return max(myFun(str1,str2,x-1,y),myFun(str1,str2,x,y-1));
    }
}
int main()
{
    string str1;
    string str2;
    cout<<"Enter first String : ";
    cin>>str1;
    cout<<endl;
    cout<<"Enter second String : ";
    cin>>str2;
    int l1 = str1.size();
    int l2 = str2.size();
    cout<<endl;
    int ans = myFun(str1,str2,l1,l2);
    cout<<"The LCS Ans is : "<<ans<<endl;
    return 0;
}
