#include <iostream>

using namespace std;
int tam(char ab[],int &enteros,int &decimales)
{
    int cont=0;
    while(ab[cont]!='\0')
    {
        if(ab[cont]=='.')
        {
            while(ab[cont]!='\0')
            {
                decimales++;
                cont++;
            }
            return decimales+enteros-1;
        }
        cont++;
        enteros++;
    }
    return enteros;
}
int mult(int num, int cont)
{
    for(int i=0;i<cont;i++)
    {
        num=num*10;
        cout<<"multipli"<<num<<endl;
    }
        return num;

}
float div(float num,int cont)
{
    for(int i=0;i<cont;i++)
    {
        num=num/10;
    }
    return num;
}

float digito(char ab[],int ent,int decim)
{
    float resultado=0;
    int cont=ent+decim;
    for(int i=0;i<cont;i++)
    {
        int a = ab[i]-'0';
        if (ab[i]=='.')
        {
            int DECI=decim;
            for(int j=i+1;j<cont;j++)
            {

                int a = ab[j]-'0';
                cout<<a<<" dad"<<endl;
                cout<<j<<" jjjjj"<<endl;
                resultado=div(a,decim-DECI+1)+resultado;
                DECI--;
                cout<<resultado<<endl;
            }
            return resultado;
        }
        else if(a>=0 && a<=9)
        {
            resultado=mult(a,ent-i-1)+resultado;
            cout<<resultado<<endl;
        }
        else
        {
            cout<<"solo se admiten numeros"<<endl;
            return 0;
        }
        cout<<i<<" iiii "<<endl;

    }

    return resultado;

}

int main()
{
    char ab[]={"233.3232"};
    int decimales=0;
    int enteros=0;
    int tamano=tam(ab,enteros,decimales);
    cout<<tamano<<endl;
    cout<<enteros<<endl;
    cout<<digito(ab,enteros,decimales);


}
