## 4-2 this指针
#### 1. C++程序到C程序的翻译
- class 类（struct 结构体）
- 成员函数（全局函数，多加一个指针，this指针）
- 对象（结构变量）
#### 2. this指针的作用
- 其作用就是指向成员函数所作用的对象
- 非静态成员函数中可以直接使用this指针来代表指向该函数作用的对象的指针
>     this指针存在的证明
>     class A
>     {
>        int i;
>        public:
>           void Hello()
>           {cout<<"hello"<<endl;}
>     };
>     int main()
>     {
>        A*p=NULL;
>        p->Hello();       //实际上就是Hello(p)
>     }

>     this指针作用
>     class Complex{
>        public：
>           double real,imag;
>           Complex(double r,double i):real(r),imag(i){}      //构造函数
>           Complex AddOne()
>          {
>              this ->real++;
>              return * this;
>          }
>          };
>     int main()
>     {
>         Complex c1(1,1),c2(0,0);
>         c2=c1.AddOne();
>         cout<<c2.real<<","<<c2.imag<<endl;
>         return 0;
>     }
> - 静态成员函数中不能使用this指针 ，因为静态成员函数并不具体作用与某个对象，所以在其内部不能使用this指针。
> - 因此，静态成员函数的真实的参数的个数，就是程序中写出的参数个数!非静态成员函数写出来的参数个数比实际的多一个，多出来的就是this指针。
