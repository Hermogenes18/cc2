#include <iostream>

using namespace std;
void suma(int x,int y,int &sum)
{
    sum=x+y;
}


int main()
{
    int x=3,y=5;
    int sum=0;
    suma(x,y,sum);
    cout<<sum;

}
