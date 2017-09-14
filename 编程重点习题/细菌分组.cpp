#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int id[100];
  double rate[100];
  for(int i=0;i<n;i++)
  {
    int start,end;
    cin>>id[i]>>start>>end;
    rate[i]=(double)end/start;
  }
  //对繁殖率的排序
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(rate[j+1]>rate[j])
      {
        int tID=id[j];
        id[j]=id[j+1];
        id[j+1]=tID;
        double tRATE=rate[j];
        rate[j]=rate[j+1];
        rate[j+1]=tRATE;
      }
    }
  }
  //记录最大的差
  double maxDiff=0;
  int maxDiffindex=0;
  for(int i=0;i<n-1;i++)
  {
    double diff=rate[i]-rate[i+1];
    if(maxDiff<diff)
    {
      maxDiff=diff;
      maxDiffindex=i;
    }
  }
  //输出繁殖率较大的那组细菌
  cout<<maxDiffindex+1<<endl;
  for(int i=maxDiffindex;i>=0;i--)
  {
    cout<<id[i]<<endl;
  }
  //输出繁殖率较小的那组细菌
  cout<<n-maxDiffindex-1<<endl;
  for(int i=n-1;i>=maxDiffindex+1;i--)
  {
    cout<<id[i]<<endl;
  }
  return 0;
}
