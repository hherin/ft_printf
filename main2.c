#include <stdio.h>
#include "inc/ft_printf.h"

int main(void)
{
	char *s = "a";
	printf(".%*.*s.\n", -4,1,s);
	ft_printf(".%*.*s.\n", -4,1,s);
}