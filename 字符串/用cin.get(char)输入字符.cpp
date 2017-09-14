#include<iostream>
using namespace std;
int main()
{
  char c;
  cout<<"enter a sentence:"<<endl;
  while(cin.get(c))
    cout<<c;//读取一个字符赋值给字符变量c
  return 0;
}
