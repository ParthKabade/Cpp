#include<iostream>
using namespace std;


#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;


                                //Parametrised constructor
        ArrayX(int X)
        {
            cout<<"Inside constructor\n";
            iSize = X;               //Characteristic initallisation
            Arr =new int[iSize];      //resoure allocation
        }


        //Destructor
        ~ArrayX()
        {
            cout<<"Inside Disstructor\n";
            delete []Arr;               //Resourse deallocation
        }

};

int main()
{
    ArrayX aobj(5);                       //Parametrised constructor
    
    return 0;
}
