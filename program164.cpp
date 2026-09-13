#include<iostream>
using namespace std;


#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;


    public:                            
        ArrayX(int X)
        {
            iSize = X;               
            Arr =new int[iSize];    
        }


        ~ArrayX()
        {
            delete []Arr;               
        }

};

int main()
{
   
    
    ArrayX *aobj=new ArrayX(5);     //ERROR

    //Logic(Function call)
    cout<<aobj->iSize;      //ERROR

    aobj->Arr=NULL;         ////ERROR

    delete aobj;

    return 0;
}
