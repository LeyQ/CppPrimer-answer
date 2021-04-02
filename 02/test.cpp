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

    int i = 0;
    //int *ip = i;

    system("pause");
    return 0;
}