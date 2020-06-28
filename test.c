#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("运算序号：\n 1、+\n 2、-\n 3、*\n 4、/\n");
	
	printf("请输入运算序号：");
	scanf("%d",&c);
	
	printf("请输入a的值:"); 
	scanf("%d",&a);
	printf("请输入b的值:");
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
