#include <stdio.h>
int main(void)
{

	
	int x, y, z;
	//�� say�y� tan�mlad�m.
	printf("X:  ");
	scanf("%d",&x);
	printf("Y:  ");
	scanf("%d",&y);
	printf("Z: ");
	scanf("%d",&z);
	//printf ve scanf fonsiyonuyla �� girdiyi ald�m.
	float xf = x;
	float yf = y;
	float zf = z;
	
	int toplam = x + y + z; //Toplam de�i�kenine toplam� atad�m.
	float ort = ((xf+yf+zf) / 3); //Ort de�i�kenine ortalamay� atad�m.
	printf("Toplam: %d \n",toplam);
	printf("Ortalama: %f\n", ort);
	
	float a = (((3 * xf *xf*xf*xf)*yf*zf) + (xf/3) + (-4*xf*xf)*yf*yf*yf*zf);
	
	
	printf("Islem Sonucu: %f",a);
	//��kan sonucu bast�rd�m.
	return 0;
}
