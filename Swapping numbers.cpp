/*This program is used to swap numbers*/
# include <stdio.h>
int main ()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
	t=a; 
	a=b; 
	b=t;
	printf("the swapped numbers are %d %d",a,b);
	return 0;
}
