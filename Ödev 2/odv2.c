#include <stdio.h>
int main(void)
{
/*



�devi Yapan: Furkan Kuyumcu, Okul No: 2220656002, Ders: Bilgisayar Programlama, Tarih: 10.04.2023, \n
Program�n amac� belirtilen fonksiyonda belirtilen x de�erleri i�in fonksiyon sonucunu ve s�zkonusu sonucun tek/�ift olma durumunu anlamakt�r.





*/
printf("Odevi Yapan: Furkan Kuyumcu, Okul No: 2220656002, Ders: Bilgisayar Programlama, Tarih: 10.04.2023, \n ");
printf("Programin amaci belirtilen fonksiyonda belirtilen x degerleri icin fonksiyon sonucunu ve sozkonusu sonucun tek/cift olma durumunu anlamaktir.");
printf("X = 1 icin: \n"); //Denklemde a de�erine 1 atad�m.
int a = 1;
int sonc1 = 2*(a+3)*(a+3)*(a+3)*(a+3) + -3*((a+4)*(a+4)) + 5*(a+1) + 17;
printf("%d\n",sonc1);//Sonucu bast�rd�m

//Sonucun ikiye b�l�m�nden kalana bakarak tek/�ift olma durumunu anlad�m. Sonucu ekrana bast�rd�m.

if(sonc1%2 == 0)
{
printf("Cift\n");
}
else{
	printf("Tek\n");
}


//Yukar�da a��klad���m i�lemlerin hepsini teker teker 2 ve 3 de�erleri i�in de yapt�m.

printf("X = 2 icin: \n");
int b = 2;
int sonc2 = 2*(b+3)*(b+3)*(b+3)*(b+3) + -3*((b+4)*(b+4)) + 5*(b+1) + 17;
printf("%d\n",sonc2);
if(sonc2%2 == 0)
{
printf("Cift\n");
}
else
{
	printf("Tek\n");
}


printf("X = 3 icin: \n");
int c = 3;
int sonc3 = 2*(c+3)*(c+3)*(c+3)*(c+3) + -3*((c+4)*(c+4)) + 5*(c+1) + 17;
printf("%d\n",sonc3);

if(sonc3%2 == 0)
{
printf("Cift\n");
}
else{
	printf("Tek\n");
}
}
