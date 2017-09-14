#include<iostream>
using namespace std;
int main()
{
    int n,m=0,num=10,sum=0,t=0;
    int zi[100];
    cin>>n;
    for(int i=0;;i++)
    {
        sum=num%10+num/10;
        t=num%sum;
        if(t==0)
        {
            zi[m]=num;
            m++;
        }
        num++;
        if(num>n)
        break;
    }
    for(int i=0;i<m;i++)
    {
        cout<<zi[i]<<endl;
    }
    return 0;
}
