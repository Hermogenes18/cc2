#include <iostream>

using namespace std;
void intercambioP(char *x)
{
    char *aux=x;
    while(*x!='\0')
    {
        x++;
    }
    x--;
    for ( ;*aux!='\0';aux++,x--)
    {
        if(aux-x<0)
        {
            char a=*x;
            *x=*aux;
            *aux=a;
        }
    }
}

void intercambioA(char arr[])
{
    int a=0;
    char aux[100];
    while(arr[a]!='\0')
    {
        aux[a]=arr[a];
        a++;
    }
    int b=a;
    a--;
    for(int i=0;i<b;i++)
    {
        arr[i]=aux[a-i];
    }

}

int main()
{
    char arr[]="hola";
    cout<<arr<<endl;
    intercambioP(arr);
    cout<<arr<<endl;

}
