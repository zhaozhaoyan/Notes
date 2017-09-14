#include<iostream>
using namespace std;
int main()
{
  char c;
  cout<<"enter a sentence:"<<endl;
  while(cin>>c)//对于cin，再从输入缓冲区读取数据的时候，会把所有的空格和回车看做区分不同的数据的
    cout<<c;//读取数据的时候，不会空格和回车当做数据读入进去
  return 0;//cin 会跳过空格，跳过回车！^Z输入结束标志
}
