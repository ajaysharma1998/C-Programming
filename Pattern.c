// 1) N=5
//            *
//         * *
//      * * *
//   * * * *
// * * * * *

// #include <stdio.h>
// int main()
// {
//     printf("enter the no of row:");
//     int i = 1, n;
//     scanf("%d", &n);
//     for (; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf("  ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// // Write a program to take value N from the user and print the following pattern based on the user input.
// // 2) N=5
// // *
// // * *
// // * * *
// // * * * *
// // * * * * *

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the no of row:");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // 3) N=3
// //  * * * * *
// //    * * * *
// //      * * *
// //        * *
// //          *

// #include <stdio.h>
// int main()
// {
//     printf("enter the no of row: ");
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n - i; i++)
//     {
//         for (int j = 1; j <= i; j--)
//         {
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // 4)N=4
// #include <stdio.h>
// int main()
// {
//     printf("Enter the value of n:");
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     { // outer loop- no of rows
//         for (int j = 1; j <= i; j++)
//         { // inner loop-space store
//             printf("_ ");
//         }
//         for (int k = n; k >= i; k--)
//         { //  inner loop- star print
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // //
// //         *
// //       * *
// //     * * *
// //   * * * *
// // * * * * *
// #include <stdio.h>
// int main()
// {

//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n - 1; j >= i; j--)
//         {
//             printf(" ");
//         }
//         for (int d = 1; d <= i; d++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 6)N=4

// // 1
// // 1 2
// // 1 2 3
// // 1 2 3 4
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number:");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i; j++)
//         {
//             printf(" %d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // 7)

// // 1 2 3 4 5
// // 1 2 3 4 5
// // 1 2 3 4 5
// // 1 2 3 4 5
// // 1 2 3 4 5

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number:");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= n; j++)
//         {
//             printf(" %d ", a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 1
// // 2 3
// // 4 5 6
// // 7 8 9 10

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number:");
//     scanf("%d", &n);
//     int k = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf(" %d ", k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 1
// // 1 3
// // 1 3 5
// // 1 3 5 7

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number :");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             printf(" %d ", a);
//             a = a + 2;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number of row :");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 0
// // 1 0
// // 0 1 0
// // 1 0 1 0
// // 0 1 0 1 0

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j != n)
//             {
//                 printf(" ");
//             }
//             else
//             {
//                 printf("*");
//             }
//         }
//         if (i == n)
//             printf("\n");
//     }
//     return 0;
// }