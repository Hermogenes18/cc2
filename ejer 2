#include <iostream>

using namespace std;

int sumar(int L[],int longit)
{
    int suma=0;
    if (longit==0)
    {
        return 0;
    }
    else
        return L[longit-1]+sumar(L,--longit);
}

int sumar1(int *ptr)
{
    int suma=0;
    while (*ptr !='\0')
        {
            suma=*ptr+suma;
            ptr++;
        }
    return suma;
}

int main()
{
    int arr[]={6,3,4,1,'\0'};
    int *ptr = arr;
    int longitud=4;
    cout<<longitud<<endl;
    cout<<"recursivo = "<<sumar(arr,longitud)<<endl;
    cout<<"iterativo = "<<sumar1(ptr)<<endl;

}
