#include "types.h"
#include "user.h"
#include "stat.h"

int main()
{
  int pid = fork();
  setnice(pid, 20);
  if(pid == 0) {
    double a = 0;
    for(int i = 0; i < 500; i++) {
      if(i == 300) ps(0);
      a += i / 3.14;
      printf(2, "c%d\n", i);
    }
    printf(2, "\n");
    exit();
  }
  double a = 0;
  for(int i = 0; i < 500; i++) {
    a += i / 3.14;
    printf(2, "p%d\n", i);
  }
  ps(0);
  wait();
	exit();
}
