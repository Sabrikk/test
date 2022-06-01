#include <stdio.h>

main()
{long int ch, x;
	printf("enter an integer: ");
	scanf("%ld", &ch);
	while(ch > 0) ch=ch/10, x=x+1;
printf("%d\n", x);
}
