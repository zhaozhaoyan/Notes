#include<iostream>
using namespace std;
int paidui(char str[],int n)//开始位置n
{
  char boy=str[0];
  if(str[n]!=boy)//
  {
    return n;//判断第n个是否为男孩，不是则返回n
  }
  else
  {
    int girl=paidui(str,n+1);
    cout<<n<<' '<<girl<<endl;
    return paidui(str,girl+1);
  }
}
int main()
{
  char str[100]={0};
  cin>>str;
  paidui(str,0);
  return 0;
}
