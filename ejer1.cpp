#include <iostream>

using namespace std;
//preg 1/////////////////////////////
void sumar(int x,int y,int &resul)
{
    resul=x+y;
}
void sumar2(int x,int y, int resul)
{
    resul=x+y;
}
int main()
{
    int x=1,y=9;
    int resul=0;
	//preg 1---------------------------------------------------------------------
    sumar(x,y,resul);
    sumar2(x,y,resul);
}
