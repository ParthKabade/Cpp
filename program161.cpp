#include<iostream>
using namespace std;


#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;


                                
        ArrayX(int X)
        {
            iSize = X;               
            Arr =new int[iSize];    
            
        }


        ~ArrayX()
        {
            cout<<"Inside Disstructor\n";
            delete []Arr;               
        }

};

int main()
{
   
    
    ArrayX *aobj=new ArrayX(5);

    //Logic(Function call)

    delete aobj;

    return 0;
}
