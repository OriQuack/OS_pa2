#include "types.h"
#include "user.h"
#include "stat.h"

int main()
{
  setnice(3, 30);

  int pid = fork();
  if(pid == 0) {
    int ppid = fork();
    if(ppid == 0) {
      for(int i = 0; i < 500; i++) {
        if(i % 100 == 0) ps(0);
        printf(2,"cc%d\n", i);
      }
      exit();
    }
    for(int i = 0; i < 500; i++) {
      if(i % 100 == 0) ps(0);
      printf(2,"c%d\n", i);
    }
    wait();
    exit();
  }
  for(int i = 0; i < 500; i++) {
    if(i % 100 == 0) ps(0);
    printf(2,"p%d\n", i);
  }
  ps(0);
  wait();
	exit();
}
