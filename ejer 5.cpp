#include <iostream>

using namespace std;
int tamPuntero(int *x)
{
    if (*x=='\0')
        return 0;
    else
    {
        return 1+tamanoP(++x);
    }
}

int tamArreglo (int x[])
{
    int cont=0;
    while(x[cont]!='\0')
    {
        cont++;
    }
    return cont;
}

int main()
{
    int arr[]={1,2,3,'\0'};
    int *ptr=arr;
    cout<<tamArreglo(ptr)<<endl;
    cout<<tamPuntero(xb)<<endl;

}
