#include <stdio.h>
int main(void)
{

	
	int x, y, z;
	//Üç sayýyý tanýmladým.
	printf("X:  ");
	scanf("%d",&x);
	printf("Y:  ");
	scanf("%d",&y);
	printf("Z: ");
	scanf("%d",&z);
	//printf ve scanf fonsiyonuyla üç girdiyi aldým.
	float xf = x;
	float yf = y;
	float zf = z;
	
	int toplam = x + y + z; //Toplam deðiþkenine toplamý atadým.
	float ort = ((xf+yf+zf) / 3); //Ort deðiþkenine ortalamayý atadým.
	printf("Toplam: %d \n",toplam);
	printf("Ortalama: %f\n", ort);
	
	float a = (((3 * xf *xf*xf*xf)*yf*zf) + (xf/3) + (-4*xf*xf)*yf*yf*yf*zf);
	
	
	printf("Islem Sonucu: %f",a);
	//Çýkan sonucu bastýrdým.
	return 0;
}
