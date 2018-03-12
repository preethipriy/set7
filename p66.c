#include <stdio.h>

int main(void) {
	 int c,a,i;
	 scanf("%d",&a);
	 for(i=1;i<=a;i++)
	 {
	 	if(a%i==0)
	 	{
	 		c++;
	 	}
	 }
	 if(c==2)
	 {
	 	printf("prime");
	 }
	 else
	 {
	 	printf("not prime");
	 }
	return 0;
}
