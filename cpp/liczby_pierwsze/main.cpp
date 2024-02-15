#include <iostream>

using namespace std;

int main(){
	int liczby_pierwsze[1000];
	for (int i=2;i<1001;i++)
{
	for (int x=0;x<1000;x++)
    {
	liczby_pierwsze[x]=i;
    }
}
	for (int x=0; x<1000; x++)
{
	cout<<liczby_pierwsze[x];
}
	return 0;
}
