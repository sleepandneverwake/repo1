#include<stdio.h>
int main()
{
	int x,y;
	printf("请输入:");
	scanf("%d",&x);
	if(x>99999)
	printf("比五位数多:");
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
