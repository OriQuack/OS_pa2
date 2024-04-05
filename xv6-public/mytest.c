#include "types.h"
#include "user.h"
#include "stat.h"

int main()
{
	ps(0);
	int a = getnice(1);
	setnice(1, a+1);
	ps(1);
	ps(-1);
	ps(5);
	getnice(-3);
	setnice(5, 39);
	setnice(2, 333);
	getnice(1);
	int b = ps(1) + 1;
	exit();
}
