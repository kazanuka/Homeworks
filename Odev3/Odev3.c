#include <stdio.h>


//Furkan Kuyumcu - Öðrenci No:2220656002 Bilgisayar Mühendisliði 2.Öðretim

int main(void)
{
	int sayi, ilksayi, kalan, ters; //Deðiþkenlerimi tanýmlýyorum.
	printf("Polindromlugunun belirlenecegi sayiyi giriniz: ");
	scanf("%d", &sayi);//printf ve scanf fonksiyonumla kullanýcýdan kontrol edilecek sayýyý çekiyorum.
	
	ilksayi = sayi; //Sayýnýn ilk halini tutabilmek için ilk sayý isimli bir deðiþkene atýyorum.
	while(sayi > 0)
	{
		//Burada while döngümün içinde mod alma yöntemiyle teker teker sayýnýn bütün basamaklarýný alýp ters çeviriyorum.Sayýnýn 10'a bölümünden kalan birler basamaðýna eþit olacaðýndan dolayý bu yöntemi kullanýyorum.
		kalan = sayi % 10;
		ters = ters*10 + kalan;
		sayi = sayi/10;
	}
	/*
	Buradaki if-else bloklarýmda girilen ilk sayýnýn yukarýda ters çevirdiðim haline eþit olup olmadýðýný kontrol ediyorum.
	*/
	if(ilksayi == ters)
	{
		printf("Girilen sayi polindrom.");//Eþitse eþit olduðunu yazdýrýyorum.
	}
	else
	{
		printf("Girilen sayi polindrom degil.");//Deðilse de eþit olmadýðýný söylüyorum.
	}
}
