#include <stdio.h>

int main(void) {
	 int i,c=1;
    char a[19];
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i]==' ')
       {
           c++;
       }
    }
    printf("%d",c);
	return 0;
}
