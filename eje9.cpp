#include <iostream>

using namespace std;
int tama(char *x)
{
    int var=0;
    while (*x!='\0')
    {
        var++;
        x++;
    }
    return var;
}
//preg 9////////////////////////////////////
void palindromo(char *v)
{
	int cont;
	for(int i=0,k=tama(v)-1;v[i]!='\0';i++,k--)
		if(v[i]==v[k])
		{
			cont++;
		}
	if(cont==tama(v))
		cout<<"si es palindromo";
	else
		cout<<"no es palindromo";
}
int main()
{
	char *palindro="oso";
	char *palindro2="reallaer";
	char pa1[]={'h','o','l','a','\0'};
	char *pal1=pa1;
	//preg 9---------------------------------------------------------------------
    cout<<palindro<<endl;
	palindromo(palindro);
	cout<<endl;
    cout<<palindro2<<endl;
	palindromo(palindro2);
	cout<<endl;
	cout<<pal1<<endl;
	palindromo(pal1);
}
