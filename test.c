#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("������ţ�\n 1��+\n 2��-\n 3��*\n 4��/\n");
	
	printf("������������ţ�");
	scanf("%d",&c);
	
	printf("������a��ֵ:"); 
	scanf("%d",&a);
	printf("������b��ֵ:");
	scanf("%d",&b);
	
	switch(c){
		case 1:
			printf("%d + %d = %d\n",a,b,a+b);
			break;
		case 2:
			printf("%d - %d = %d\n",a,b,a-b);
			break;
		case 3:
			printf("%d * %d= %d\n",a,b,a*b);
			break;
		case 4:
			printf("%d / %d= %d\n",a,b,a/b);
			break;
	};
	
	
	return 0;
	
}
