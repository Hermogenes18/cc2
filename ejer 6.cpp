#include <iostream>

using namespace std;

int Tpuntero(char *x)
{
    if (*x=='\0')
        return 0;
    else
    {
        return 1+Tpuntero(++x);
    }
}

void copia1(char *s,char *t)
{
    if(Tpuntero(s)<Tpuntero(t))
    {

        cout<<"El arreglo no tiene el espacio suficiente"<<endl;
    }
    else
    {
        for ( ;*t!='\0';t++,s++)
        {
            *s=*t;
        }
        for ( ;*s!='\0';s++)
        {
           *s='\0';
        }
    }
}


void copiar2(char x[],char y[])
{
    int a=0,b=0;
    while(x[a]!='\0')
    {
        a++;
    }
    while(y[b]!='\0')
    {
        y[b]='\0';
        b++;
    }
    if (a<b)
    {
        for(int i=0;i<a;i++)
        {
            y[i]=x[i];
        }
    }
}
int main()
{
    char arr[]="Hello w";
    char arr2[]="Hola M";
    //cout<<arr<<endl;
    //copiar2(arr,arr2);
    cout<<arr<<endl;
    copia1(arr,arr2);
    cout<<arr<<endl;

}
