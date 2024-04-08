#include "types.h"
#include "user.h"
#include "stat.h"

int main()
{
  int pid = fork();
  setnice(pid, 20);
  if(pid == 0) {
    double a = 0;
    for(int i = 0; i < 1000; i++) {
      a += i / 3.14;
      printf(2, "c");
    }
    printf(2, "\n");
    ps(0);
    exit();
  }
  double a = 0;
  for(int i = 0; i < 1000; i++) {
    a += i / 3.14;
    printf(2, "p");
  }
  wait();
	exit();
}
