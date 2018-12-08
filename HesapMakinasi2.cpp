#include <iostream>
#include <cstdlib>
using namespace std ;

int toplama(int x , int y)
{
	int sonuc;
	sonuc = x + y;
	return sonuc;
}

int cikarma(int x , int y)
{
	int sonuc;
	sonuc = x - y;
	return sonuc;
}

int carpma(int x , int y)
{
	int sonuc;
        sonuc = x * y;
        return sonuc;
}

int bolme(int x , int y)
{
	int sonuc;
	sonuc = x / y;
	return sonuc;
}
int main(){
	while (1)
{
	int sayi1;
	int sayi2;
	int secenek;
	int kapa;
	cout << "- Toplama Yapmak Icin 1'i " << endl << "- Cikarma Yapmak Icin 2'i" << endl << "- Carpma Yapmak Icin 3'i" << endl << "- Bolme Yapmak Icin 4'i" << "Tuslayaniz !" ;
	cin >> secenek;

	if((secenek < 5) || (secenek > 0))
	{
		cout << "1. sayiyi giriniz" << endl;
		cin >> sayi1;

		cout << "2. sayiyi giriniz" << endl;
		cin >> sayi2;

		if(secenek == 1)
		{
			toplama(sayi1,sayi2);
		}
		else if (secenek == 2)
		{
			cikarma(sayi1,sayi2);
		}
		else if (secenek == 3)
		{
			carma(sayi1,sayi2);
		}
		else if (secenek == 4)
		{
			bolme(sayi1,sayi2);
		}
		cout << "Cevap = " << sonuc << endl;
		cin >> kapa;
	}
	else 
	{
		cout << "Lutfen sayi araliginda bir secenek giriniz ! " ;
		cin >> kapa;
	}
	system("cls");
}
}
