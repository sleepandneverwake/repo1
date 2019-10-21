
#include<stdio.h>
int main()
{
	int x,y;
	printf("请输入一个不多于五位的数字:");
	scanf("%d",&x);
    if(x>99999)
		printf("这是多于五位数的数请重新输入!");
		else if(x>9999)
		y=5;
	else if(x>999)
		y=4;
	else if(x>99)
		y=3;
	else if(x>9)
		y=2;
	else 
		y=1;
    printf("这个数字为%d位",y);
    return 0;
}

