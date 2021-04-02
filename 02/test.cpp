#include<iostream>
using namespace std;

int main()
{
    int* p = 0;
    int* pi = NULL;
    int* pii = nullptr;

    cout << p << endl;
    cout <<pi << endl;
    cout <<pii << endl;

    double obj = 3.14, *pd = &obj;
    void* pv = &obj;
    pv = pd;    //void类型可以存放任意类型的指针
    //不能直接操作void* 指针所指的对象，因为不知道具体对象类型。

    int k = 42;
    int &a = k;
    cout << k << " " << a << endl;

    double q = 3.14;
    const int &b = q;

    int i = 42;
    //int *ip = i;
    const int bufSize = i;//用i初始化可以改变（初始化仅限一次->避免重复定义
    //bufSize = 512;//const int类型，无法改变值

    cout << i++ << " " << ++i << endl;
    //i++返回的是42，然而i会变为43，返回的这个数是临时变量，临时变量是右值

    //int &i = 42;  //x 引用必须要是对象
    const int rr = 42;
    const int &rr1 = rr;//引用对象，该引用及对象都是常量
    //引用类型必须与引用对象类型一致

    int j = 42;
    const int &r1 = j;//初始化的时候例外,引用类型和引用对象可以不一样
    const int &r2 = 42;
    const int &r3 = r2 * 2;

    double dval = 3.14; 
    const int &ri = dval;//不是const则非法
    cout << dval << " " << ri << endl;

    int o = 42;
    int &lr = o;        //引用变量o
    const int &lr2 = o; //同样引用变量o，const会对引用（lr2）的操作做出限定

    lr = 0;
    //lr2 = 0;//无法通过有const的引用改变引用对象的值

    system("pause");
    return 0;
}