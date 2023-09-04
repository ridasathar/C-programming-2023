/*This program is used to convert kilometer to metercentimetermillimeter*/
# include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a*1000;
	c=a*100000;
	d=a*1000000;
	printf("The length is %d m\n",b);
	printf("The length is %d cm\n",c);
	printf("The length is %d mm\n",d);
	return 0;
}

