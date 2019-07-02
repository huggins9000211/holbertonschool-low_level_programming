#include<stdio.h>

int main(char *s)
{
	int a[] = {1, 2, 3, 8, 3, 5, 9, 0, 12, 56};
	//char b[] = *s;  // use this
	    int i, *p;



	    for(i=0; i<(&a)[1]-a; i++)   // even more efficient
	    	printf("%d", a[i]);

	    return 0;
}
