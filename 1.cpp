
#include<stdio.h>
int main()
{
	int x,y;
	printf("������һ����������λ������:");
	scanf("%d",&x);
    if(x>99999)
		printf("���Ƕ�����λ����������������!");
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
    printf("�������Ϊ%dλ",y);
    return 0;
}

