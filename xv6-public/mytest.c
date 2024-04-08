#include "types.h"
#include "user.h"
#include "stat.h"

int main()
{
  char *args[] = {"./_mytest", NULL};
  double a = 0;
  
  for(int i = 0; i < 100000; i++) {
    a += i / 3.14;
  }
  exec(args[0], args);
  ps(0);
	exit();
}
