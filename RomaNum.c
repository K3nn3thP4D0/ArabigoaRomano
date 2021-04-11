#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	int num,unidad,decen,centen;
	printf("Escribe un valor:\n");
	scanf("%d",&num);
	if (num>=101 || num==0) 
		printf("\nValor fuera de rango permitido.");
	else
	{
		centen=(num/100)%100;
	decen=(num/10)%10;
	unidad=(num/1)%10;
	if (centen==1)
		printf("C");
	else
	{
		if (decen>=1 || decen<=9)
		{
			if(decen==1)
				printf("X");
			if(decen==2)
				printf("XX");
			if (decen==3)
				printf("XXX");
			if(decen==4)
				printf("XL");
			if(decen==5)
				printf("L");
			if(decen==6)
				printf("LX");
			if(decen==7)
				printf("LXX");
			if(decen==8)
				printf("LXXX");
			if(decen==9)
				printf("XC");	
		}
		if (unidad>=1 || unidad<=9)
			{
				if(unidad==1)
					printf("I");
				if(unidad==2)
					printf("II");
				if (unidad==3)
					printf("III");
				if(unidad==4)
					printf("VI");
				if(unidad==5)
					printf("V");
				if(unidad==6)
					printf("VI");
				if(unidad==7)
					printf("VII");
				if(unidad==8)
					printf("VIII");
				if(unidad==9)
					printf("IX");	
			}	
		}	
	}						
}
