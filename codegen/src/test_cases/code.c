#include <string.h>
#include <stdio.h>


int fact(int n) {
	if(n <= 1)
		return 1;
	return n*fact(n-1);
}
int main()
{
	char a[] = "harsh agarwal";
	
	a[1] = 'c';
	a[8] = 'c';	

	fact(5);
	return 0;
}