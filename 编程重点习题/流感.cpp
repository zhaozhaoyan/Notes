#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  char a[100][100];
  int n,m,sum=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  cin>>m;
  for(int day=1;day<=m;day++)
  {
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(a[i][j]=='!')  a[i][j]='@';//标记法
      }
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(a[i][j]=='@')
        {
          if(i+1<n&&a[i+1][j]=='.')  a[i+1][j]='!';//标记上下左右有人的房间
          if(i-1>=0&&a[i-1][j]=='.')  a[i-1][j]='!';
          if(j+1<n&&a[i][j+1]=='.')  a[i][j+1]='!';
          if(j-1>=0&&a[i][j-1]=='.')  a[i][j-1]='!';
        }
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(a[i][j]=='@')  sum++;
    }
  }
  cout<<sum<<endl;
  return 0;
}
