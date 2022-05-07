#include <iostream>
using namespace std;

//�arpma operat�r� (*) kullanmadan �arpma i�lemini yapan fonksiyon
void Carpma(int n1, int n2)
{
	int cSonuc=0, k=0;
	while(k<n1)//Girilen ilk say�n�n de�eri k de�erinden b�y�k oldu�u s�rece �al��acak bir d�ng� kuruyoruz.
	{
		cSonuc+=n2;//Her d�ng� ad�m�nda girilen ikinci say�n�n de�erini carpim de�i�keniyle toplay�p carpim de�i�kenine at�yoruz.
		k++;//k de�erini bir defa art�r�yoruz.
	}
	cout<<n1<<" * "<<n2<<" = "<<cSonuc<<endl;
}

//B�lme operat�r� (/) kullanmadan b�lme i�lemini yapan fonksiyon
void Bolme(int n1, int n2)
{
	int bSonuc=0, bKalan=0;
	if (n1==n2)//E�er girilen de�erler birbirine e�itse sonucun 1 oldu�unu ve kalan�n da 0 olaca��n� belirtir.
	{
		bSonuc=1;
		cout<<"Bolum= "<<bSonuc<<endl<<"Kalan= "<<bKalan<<endl;		
	}
	else if (n1>n2)//Girilen de�erlerden ilki di�erinden daha b�y�kse ona g�re i�lem yapacak.
	{
		while (n1>0 & n1>=n2)//�lk de�er s�f�rdan b�y�k oldu�u ve ilk de�erin ikinci de�erden b�y�k oldu�u s�rece d�necek olan bir d�ng�.
		{
			n1-=n2;//Her d�ng� ad�m�nda ilk say�dan ikincisini ��karacak ve e�er ilk say�n�n de�eri ikinci say�n�n de�erinden k���k oldu�unda d�ng� bitecek. Ve s1'in son de�eri kalan olacak.
		    bSonuc++;//Bir �st sat�rda yap�lan ��karma i�lemi ka� kez yap�labilmi�se b�l�m de�eri odur. Bu sat�rda b�l�m de�erini belirleyebilmek i�in bir nevi d�ng� ad�m say�s�n� say�yoruz.		    
		}
		bKalan=n1;
		cout<<"Bolum= "<<bSonuc<<endl<<"Kalan= "<<bKalan<<endl; 
	}	
	else if (n2>n1)//Girilen de�erlerden ikincisi di�erinden daha b�y�kse ona g�re i�lem yapacak.
	{
		while (n2>0 & n2>=n1)//�kinci de�er s�f�rdan b�y�k oldu�u ve ikinci de�erin ilk de�erden b�y�k oldu�u s�rece d�necek olan bir d�ng�.
		{
		    n2-=n1;//Her d�ng� ad�m�nda ikinci say�dan ilkini ��karacak ve e�er ikinci say�n�n de�eri ilk say�n�n de�erinden k���k oldu�unda d�ng� bitecek. Ve s2'in son de�eri kalan olacak.
		    bSonuc++;//Bir �st sat�rda yap�lan ��karma i�lemi ka� kez yap�labilmi�se b�l�m de�eri odur. Bu sat�rda b�l�m de�erini belirleyebilmek i�in bir nevi d�ng� ad�m say�s�n� say�yoruz.		   
		}
		bKalan=n2;
		cout<<"Bolum= "<<bSonuc<<endl<<"Kalan= "<<bKalan<<endl;
	}
}

int main()
{
	int number1, number2;
	cout<<"------Carpma operatoru (*) kullanmadan carpma islemini yapan program-----"<<endl<<endl<<"1. sayiyi giriniz: "; 
	cin>>number1;//1. say�y� kullan�c�dan al�yoruz.
	cout<<"2. sayiyi giriniz: ";
	cin>>number2;//2. say�y� kullan�c�dan al�yoruz.
	Carpma(number1,number2);//�arpma i�lemini yapacak olan fonksiyonu �a��r�yoruz.	
	int number3, number4;
	cout<<endl<<"------Bolme operatoru (/) kullanmadan bolme islemini yapan program-----"<<endl<<endl<<"1. sayiyi giriniz: "; 
	cin>>number3;
	cout<<"2. sayiyi giriniz: ";
	cin>>number4;
	Bolme(number3, number4);//B�lme i�lemini yapacak olan fonksiyonu �a��r�yoruz.
	return 0;
}
