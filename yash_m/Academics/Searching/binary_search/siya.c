// binary search
#include <stdio.h>
int main()
{
     int size = 0, a[size], i, low = 0, mid = 0, high = 0, ele = 0;
     printf("Enter size: ");
     scanf("%d", &size);
     printf("Enter element of array in sorted way: ");
     for (i = 0; i < size; i++)
     {
          scanf("%d", &a[i]);
     }
     printf("Enter the element to be search: ");
     scanf("%d", &ele);
     low = 0;
     high = size - 1;
     while (low <= high)
     {
          mid = (low + high) / 2;
          if (a[mid] == ele)
          {
               printf("Element %d found at position %d", ele, mid + 1);
               break;
          }
          else if (a[mid] < ele)
          {
               low = mid + 1;
          }
          else
          {
               high = mid - 1;
          }
     }
     if (ele = !a[i])
     {
          printf("ELement %d not found at any position %d", ele);
     }
}