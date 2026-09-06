#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
};

int main()
{
    ArrayX aobj;

    cout<<sizeof(aobj)<<endl;
    cout<<sizeof(aobj.Arr)<<endl;
    cout<<sizeof(aobj.iSize)<<endl;

    return 0;
}
