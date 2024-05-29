#include<stdio.h>
struct point{
	int x;
	int y;
};
int main()
{
	struct point p1 = {10,20};
	struct point p2 = p1;
	printf("p1.x is %d \n p1.y is %d \n",p1.x,p1.y);
	printf("&p1.x is %ls \n &p1.y is %ls \n",&p1.x,&p1.y);
	return 0;
}
