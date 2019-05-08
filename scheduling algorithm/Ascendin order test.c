#include <stdio.h>
    void main(){
        int i, j, n, a, number[30];
        printf("Enter the value of n: \n");

        scanf("%d", &n);

        printf("\nEnter the numbers:\n");

        for(i=0; i<n; i++)
            scanf("%d", &number[i]);

        printf("\nThe unordered array: \n");


        for(i=0; i<n; i++){
            if(i<n-1)
                printf(" %d,", number[i]);

            else
                printf(" %d", number[n-1]);
        }

        printf("\n\n");

        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){

                printf("array i = %d, array j = %d\n", number[i], number[j]);
                int b;

                if(number[i] > number[j]){

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }
            }
        }

        printf("The numbers arranged in ascending order are given below \n");
            for (i = 0; i < n; i++)
                printf("%d\n", number[i]);
    }
