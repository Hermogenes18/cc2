#include <iostream>

using namespace std;
void cadArreglo(char s[],char t[])
{
    int tam1=0,tam2=0;
    while(s[tam1]!='\0')
    {
        tam1++;
    }
    while(t[tam2]!='\0')
    {
        tam2++;
    }
    for(int i=0;i<tam1+tam2;i++)
    {
        s[tam1+i]=t[i] ;
    }

}
void cadPuntero(char *a, char *b)
{
    while(*a!='\0')
    {
       a++;
    }
    while(*b!='\0')
    {
       *a=*b;
        a++;
        b++;
    }
    *a='\0';
}

int main()
{
    char t[]="Mundo";
    char s[]="Hola";
    //cadArreglo1(s,t);
    //cout<<s<<endl;
    cadPuntero(s,t);
    cout<<s<<endl;

}
