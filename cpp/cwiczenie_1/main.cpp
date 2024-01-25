#include <iostream>
#include <fstream>

using namespace std;

int main(){
	float spal;
	float spal1;
	float trasa;
	float cena;
	float koszt;
	float osoby;
	float koszt_osoby;
	cout<<"Podaj trase "<<endl;
	cin>>trasa;
	cout<<"Podaj spalanie "<<endl;
	cin>>spal;
	cout<<"Podaj cene za litr "<<endl;
	cin>>cena;
	cout<<"Podaj ilosc osob "<<endl;
	cin>>osoby;
	spal1 = trasa*spal/100;
	koszt = spal1*cena;
	koszt_osoby = koszt/osoby;
	
	cout<<"Koszt za osobe to "<<koszt_osoby<<endl;

	fstream plik;
	plik.open("dane.txt", ios::out);
	plik<<"Koszt za osobe to "<<koszt_osoby<<endl;
	plik.close();
	return 0;
}
