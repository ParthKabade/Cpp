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

        void Accept()
        {
            cout<<"Enter the elementa :\n"

            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
};
void Display()
        {
            iCnt=0;
            cout<<"Enter the elements of array :\n"

            for(iCnt=0;iCnt<iSize;iCnt++)
            {   
                cin>>Arr[iCnt]"\n";
            }
        }

int main()
{
   
    
    ArrayX *aobj=Null;

    //FUNCTION CALL

    int i  Length=0;
    
    cout<<"Enter the. number of elements:"
    cin>>iLegthn;

    aonj=new ArrayX(ArrayX(iLength));

    aobj->Accept();
    aobj->(Display);
    return 0;
}
