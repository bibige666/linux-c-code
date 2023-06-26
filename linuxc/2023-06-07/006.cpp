#include <iostream>
using namespace std;

int main()
{
    int Pool_volume;
    int count=10;
    while(count!=0)
    {
        cin>>Pool_volume;
        if(Pool_volume<100)
            cout<<"游泳池没溢出可以继续加水"<<endl;
        else
            cout<<"游泳池中水已满,必须停止加水或者加入另一个泳池"<<endl;
        count--;

    }
    return 0;
}
