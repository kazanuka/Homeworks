#include <stdio.h>
int main(void)
{
/*



Ödevi Yapan: Furkan Kuyumcu, Okul No: 2220656002, Ders: Bilgisayar Programlama, Tarih: 10.04.2023, \n
Programýn amacý belirtilen fonksiyonda belirtilen x deðerleri için fonksiyon sonucunu ve sözkonusu sonucun tek/çift olma durumunu anlamaktýr.





*/
printf("Odevi Yapan: Furkan Kuyumcu, Okul No: 2220656002, Ders: Bilgisayar Programlama, Tarih: 10.04.2023, \n ");
printf("Programin amaci belirtilen fonksiyonda belirtilen x degerleri icin fonksiyon sonucunu ve sozkonusu sonucun tek/cift olma durumunu anlamaktir.");
printf("X = 1 icin: \n"); //Denklemde a deðerine 1 atadým.
int a = 1;
int sonc1 = 2*(a+3)*(a+3)*(a+3)*(a+3) + -3*((a+4)*(a+4)) + 5*(a+1) + 17;
printf("%d\n",sonc1);//Sonucu bastýrdým

//Sonucun ikiye bölümünden kalana bakarak tek/çift olma durumunu anladým. Sonucu ekrana bastýrdým.

if(sonc1%2 == 0)
{
printf("Cift\n");
}
else{
	printf("Tek\n");
}


//Yukarýda açýkladýðým iþlemlerin hepsini teker teker 2 ve 3 deðerleri için de yaptým.

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
