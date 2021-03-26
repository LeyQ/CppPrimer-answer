#include <iostream>
using namespace std;

int main()
{
    int currVal = 0, val = 0;
    if(cin>>currVal)
    {
        int cnt = 1;
        while(cin>>val)//实时接收每一个数据，所以无法确定是否是最后一个数据，因此需要结束位
        {
            if (currVal == val)
                ++cnt;
            else {
                cout << currVal << " occurs "
                << cnt << " times " << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs "
                << cnt << " times " << endl;
    }
    system("pause");
    return 0;
}