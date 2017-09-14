#include<iostream>
using namespace std;
int main()
{
  char c;
  cout<<"enter a sentence:"<<endl;
  while((c=cin.get())!=EOF)
    cout<<c;//不会跳过空格和回车，都当做普通字符
  return 0;
}
