#include<iostream>
#include<vector>
using namespace std;
void change(char str[])
{
  for(int i=0;str[i]!='\0';i++)
  {
    if((str[i]>='a')&&(str[i]<='z'))
    {
      str[i]=str[i]-32;//将小写字母转化为大写字母
    }
  }
}
void count(char str[],int num[])
{
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]>='A'&&str[i]<='Z')
    {
      num[str[i]-65]++;//计算数组中26个英文字母出现的次数，并且保存在n数组中
    }
  }
}
//找出num数组中出现次数第二多的字母，并保存在sec数组中
void second(int num[],char sec[])
{
  int maxcount=0;
  for(int i=0;i<26;i++)
  {
    if(maxcount<num[i])   maxcount=num[i];
  }
  for(int i=0;i<26;i++)
  {
    if(num[i]==maxcount)  num[i]=0;
  }
  int seccount=0;
  for(int i=0;i<26;i++)
  {
    if(seccount<num[i])  seccount=num[i];
  }
  int j=0;
  for(int i=0;i<26;i++)
  {
    if(num[i]==seccount)
    {
      sec[j]=i+65;
      j++;
    }
  }
  sec[j]='\0';
}
//主函数
int main()
{
  char str[501];
  cin>>str;
  int zimu[26]={0};
  char secc[26];
  change(str);
  count(str,zimu);
  second(zimu,secc);
  for(int i=0;str[i]!='\0';i++)
  {
    for(int j=0;secc[j]!='\0';i++)
    {
      if(str[i]==secc[j])
      {
        cout<<secc[j]<<'+'<<(char)(secc[j]-32)<<':'<<count[secc[j]-65]<<endl;
        return 0;
      }
    }
  }
  return 0;
}
