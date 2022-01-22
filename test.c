#include <stdio.h>
#include "test.h"

int sum(int a,int b)
{
	static int c;
	return c=a+b;
}

