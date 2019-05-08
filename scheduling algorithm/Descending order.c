#include <stdio.h>

int main(){

    int i, j, n, a, number[30];

    printf("Enter the value of n:\n");

    scanf("%d", &n);

    printf("\nEnter the numbers:\n");

    for(i=0; i<n; i++){

        scanf("%d", &number[i]);
    }

    printf("\nThe unordered number list:\n");

    for(i=0; i<n; i++){

        if(i<n-1)
            printf("%d, ", number[i]);
        else
            printf("%d", number[i]);
    }


    printf("\nOrdered number list: \n");

    for(i=0; i<n; i++){

        for(j=i+1; j<n; j++){

            if(number[i] < number[j]){

                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    for(i=0; i<n; i++)
        printf("%d", number[i]);
}
