#include <stdio.h>

sorting() {
   int arr[100], n, i, j, temp;
   
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array:\n");
   for (i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
   }

   for (i = 0; i < n - 1; ++i) {
      for (j = 0; j < n - i - 1; ++j) {
         if (arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }

   printf("Array sorted in ascending order: ");
   for (i = 0; i < n; ++i) {
      printf("%d ", arr[i]);
   }

//   return 0;
}

