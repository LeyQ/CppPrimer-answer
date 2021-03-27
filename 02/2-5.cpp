#include<iostream>
using namespace std;

int main()
{
    char a = 'a';//'a' char
    char b = L'a';//L'a' 宽char
    char c[] = "a";//"a" string
    wchar_t d[] = L"a";//L"a" 宽字符string

    //10, int
    //10u, unsigned int
    //10L, long
    //10uL, unsigned long
    //012, 八进制int
    //0xC, 十六进制int

    cout << typeid(3.14).name() << endl;//3.14, doule
    cout << typeid(3.14f).name() << endl;//3.14f, float
    cout << typeid(3.14L).name() << endl;//3.14L, long float

    cout << typeid(10).name() << endl;//int 
    cout << typeid(10u).name() << endl;//unsigned int
    cout << typeid(10.).name() << endl;//double
    cout << typeid(10e-2).name() << endl;//double

    system("pause");
    return 0;
}
