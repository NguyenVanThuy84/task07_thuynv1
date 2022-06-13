#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char ch;
	printf("nhap vao ky tu \n");
	scanf("%c",&ch);
	switch (ch)
	{
		case 'a':
		case 'e':
		case 'u':
		printf ("la nguyen am");
		break;
		case 'z':
		printf ("la phu am");
		break;
		default:	
			printf("khong phai nguyen am va phu am");
			break;
	}
	return 0;
}
