#include "types.h"
#include "user.h"
#include "stat.h"


// void bubbleSort(int arr[], int n)
// {
//     int i, j;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// Driver program to test above functions
int main()
{
    int n = 10000;
    int arr[n];
    for(int i = 0; i < n; i++) {
      arr[i] = n - i;
    }
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    ps(0);
    exit();
}
// int main()
// {
//   setnice(3, 30);

//   int pid = fork();
//   if(pid == 0) {
//     int ppid = fork();
//     if(ppid == 0) {
//       for(int i = 0; i < 500; i++) {
//         if(i % 100 == 0) ps(0);
//         printf(2,"cc%d\n", i);
//       }
//       exit();
//     }
//     for(int i = 0; i < 500; i++) {
//       if(i % 100 == 0) ps(0);
//       printf(2,"c%d\n", i);
//     }
//     wait();
//     exit();
//   }
//   for(int i = 0; i < 500; i++) {
//     if(i % 100 == 0) ps(0);
//     printf(2,"p%d\n", i);
//   }

  
//   ps(0);
//   wait();
// 	exit();
// }
