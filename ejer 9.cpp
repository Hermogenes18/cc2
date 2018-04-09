#include <iostream>

using namespace std;
void palindromo(char *x)
{
    int a=0,b=0;
    while(*(x+a)!='\0')
    {
        a++;
    }
    for(int i=0;i<a/2;i++)
    {
        if (*(x+i)!=*(x-i+a-1))
        {
            cout<<"no ";
            break;

        }
    }
    cout<<"es palindromo"<<endl;

}

int main()
{
    char *ab="osro";
    palindromo(ab);

}

