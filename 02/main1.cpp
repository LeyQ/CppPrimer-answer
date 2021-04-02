#include<iostream>
using namespace std;

int main()
{
    auto a = L'a';  //字面值前缀L，宽字符
    auto b = u8"hi!";   //utf-8字符串
    auto c = 42ULL; //后缀，unsigned long long
    auto d = 1E-3F; //1的10的-3次方，float类型
    auto e = 3.14159L;  //long double

    cout << a << ":" << sizeof(a) << ":" <<typeid(a).name() << endl;
    cout << b << ":" << sizeof(b) << ":" <<typeid(b).name() << endl;
    cout << c << ":" << sizeof(c) << ":" <<typeid(c).name() << endl;
    cout << d << ":" << sizeof(d) << ":" <<typeid(d).name() << endl;
    cout << e << ":" << sizeof(e) << ":" <<typeid(e).name() << endl;

    
    system("pause");
    return 0;
}