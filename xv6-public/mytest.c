#include "types.h"
#include "user.h"
#include "stat.h"


// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }

        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == 0)
            break;
    }
}

// Driver program to test above functions
int main()
{
    int n = 1000;
    int arr[n];
    for(int i = 0; i < n; i++) {
      arr[i] = n - i;
    }
    bubbleSort(arr, n);
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
