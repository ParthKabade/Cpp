#include<iostream>
using namespace std;


#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;


    public:         
        ArrayX()
        {
            iSize = 5;               
            Arr =new int[iSize];    
        }
        
        
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
   
    
    ArrayX *aobj1=new ArrayX();
    ArrayX *aobj2=new ArrayX(5);


    //FUNCTION CALL

    delete aobj1;       //Default constructor
    delete aobj2;       //Paramterised constructor

    return 0;
}
