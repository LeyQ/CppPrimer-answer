#include<iostream>
using namespace std;

int main()
{
    int ival = 1024;
    int &refVal = ival;//引用与初始值绑定在一起，而不是赋值

    refVal = 2;
    int ii = refVal;
    //引用本身不是对象，只是一个别名，所以不能定义引用的引用

    int i = 1024, i2 = 2048;
    int &r = i, rr = i2;
    int i3 = 1024, &ri = i3;
    int &r3 = i3, &r4 = i2;

    //int &refVal4 = 10;//错误，引用的初始值必须是对象（左值）

    system("pause");
    return 0;
}