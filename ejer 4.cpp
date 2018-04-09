#include <iostream>

using namespace std;


void multmat(int A[][3], int B[][3], int C[][3],int length)
{
    int i, j, k;
    for(i=0; i<length; i++)
    {
        for(j=0; j<length; j++)
        {
            C[i][j]=0;
            for(k=0; k<length; k++)
            {
                C[i][j]= C[i][j]+A[i][k]*B[k][j];
            }
        }
      }

}
void mostrar(int M[][3],int length)
{
    for(int i=0 ; i<length ; i++)
    {
            for(int j=0 ; j<length ; j++)
            {
                cout << M[i][j] << " ";
            }
            cout<<endl;
    }

}
int main()
{

    int Matriz[3][3]={{2,3,6},{4,1,2},{2,7,1}};
    int Matriz1[3][3]={{3,3,2},{4,1,3},{2,3,4}};
    int longitud=3;
    int MatrizCopia[longitud][3];
    mostrar(Matriz,longitud);
    multmat(Matriz,Matriz1,MatrizCopia,longitud);
    mostrar(MatrizCopia,longitud);
}
