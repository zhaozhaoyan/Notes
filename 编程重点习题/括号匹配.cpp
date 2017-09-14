#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char str[101]={};
  int i,j;//全局变量i，j
  int a=-1,b;
  while(cin.getline(str,101))
  {
    cout<<str<<endl;
    int n=strlen(str);
    for(i=0;i<n;i++)
    {
      if((str[i]!='(')&&(str[i]!=')'))
      {
        str[i]=' ';
      }
    }
    while(1)//无限循环，break跳出循环
    {
      for(i=0;i<n;i++)
      {
        if(str[i]=='(')  a=i;
        else if(str[i]==')')
        {
          b=i;
          break;
        }
      }
      if(i==n)//进行标记，所有的）配完，剩下的（标记为$
      {
        for(j=0;j<n;j++)
        {
          if(str[j]=='(')
          {
              str[j]='$';
          }
        }
        break;
      }
      else if(a==-1)//还有右括号的话，就继续循环，没有匹配的就标记为问号
      {
        str[b]='?';
      }
      else
      {
        str[a]=' ';
        str[b]=' ';
        a=-1;
      }
    }
    cout<<str<<endl;
    a=-1;
  }
  return 0;
}
