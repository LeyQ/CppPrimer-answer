//用转义序列写一段程序，先输出2M，然后转到新的一行，
//使其先输出2，然后输出制表符，再输出M，最后转到新的一行
#include <iostream>

int main()
{
    std::cout<<"\x32\115\n";
    std::cout<<"\x32\t\115\n";
    
    system("pause");
    return 0;
}