//namespace kullan�m�

#include<iostream>
using namespace std;

namespace alan1
{
          int x=9;
          float y=3.1;
}
namespace alan2
{
          int x=29;
          char y='a';
}
int main()
{
    using namespace alan1;
    cout<<x<<endl; //Alan1 deki x ve y de�erlerini yazd�r�r
    cout<<y<<endl;
    cout<<alan2::x<<endl; //Alan2 deki x ve y de�erlerini yazd�r�r
    cout<<alan2::y<<endl;
    system("pause");
    return 0;
}


