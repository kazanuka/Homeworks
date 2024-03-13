#include <stdio.h>


//Furkan Kuyumcu - ��renci No:2220656002 Bilgisayar M�hendisli�i 2.��retim

int main(void)
{
	int sayi, ilksayi, kalan, ters; //De�i�kenlerimi tan�ml�yorum.
	printf("Polindromlugunun belirlenecegi sayiyi giriniz: ");
	scanf("%d", &sayi);//printf ve scanf fonksiyonumla kullan�c�dan kontrol edilecek say�y� �ekiyorum.
	
	ilksayi = sayi; //Say�n�n ilk halini tutabilmek i�in ilk say� isimli bir de�i�kene at�yorum.
	while(sayi > 0)
	{
		//Burada while d�ng�m�n i�inde mod alma y�ntemiyle teker teker say�n�n b�t�n basamaklar�n� al�p ters �eviriyorum.Say�n�n 10'a b�l�m�nden kalan birler basama��na e�it olaca��ndan dolay� bu y�ntemi kullan�yorum.
		kalan = sayi % 10;
		ters = ters*10 + kalan;
		sayi = sayi/10;
	}
	/*
	Buradaki if-else bloklar�mda girilen ilk say�n�n yukar�da ters �evirdi�im haline e�it olup olmad���n� kontrol ediyorum.
	*/
	if(ilksayi == ters)
	{
		printf("Girilen sayi polindrom.");//E�itse e�it oldu�unu yazd�r�yorum.
	}
	else
	{
		printf("Girilen sayi polindrom degil.");//De�ilse de e�it olmad���n� s�yl�yorum.
	}
}
