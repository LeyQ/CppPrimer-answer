#include<iostream>
using namespace std;

int reused = 42;

int main()
{
    int unique = 0;
    cout<< reused << " " << unique << endl;

    int reused = 0;//覆盖作用域
    cout<< reused << " " << unique << endl;

    //显式地访问全局变量reused
    cout<< ::reused << " " << unique << endl;

    system("pause");
    return 0;
}