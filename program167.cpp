#include<iostream>
 using namespace std;


#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;


    public:         
        
        
        ArrayX(int X=5) //Parametrised constructor with default argument
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
   
    
    ArrayX *aobj1=new ArrayX();                         //Paramterised constructor
    ArrayX *aobj2=new ArrayX(15);                        //Paramterised constructor


    //FUNCTION CALL

    delete aobj1;       //Default constructor
    delete aobj2;       

    return 0;
}
