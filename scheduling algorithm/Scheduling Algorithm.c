#include <stdio.h>

int main(){

    int i, j, n, serial_number[30], temp_serial_number, arrival_time[30], temp_arrival_time, burst_time[30], priority_based[30];

    printf("Please enter the row number n: \n");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\nEnter serial_number: \n");
        scanf("%d", &serial_number[i]);

        printf("Enter arrival_time: \n");
        scanf("%d", &arrival_time[i]);

        printf("Enter burst_time: \n");
        scanf("%d", &burst_time[i]);

        printf("Enter priority_based: \n");
        scanf("%d", &priority_based[i]);

        printf("\nserial_number: %d, arrival_time: %d, burst_time: %d, priority_based: %d\n\n", serial_number[i], arrival_time[i], burst_time[i], priority_based[i]);
    }

    printf("\nThe arrays are: \n\n");
    for(i=0; i<n; i++){

        printf("serial_number: %d, ", serial_number[i]);
        printf("arrival_time: %d, ", arrival_time[i]);
        printf("burst_time: %d, ", burst_time[i]);
        printf("priority_based: %d, ", priority_based[i]);

        printf("\n");
    }

    printf("\nEnter the algorithm type: FCFS/ SJF/ PBS\n");

    //FCFS
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arrival_time[i] > arrival_time[j]){
                temp_serial_number = serial_number[i];
                serial_number[i] = serial_number[j];
                serial_number[j] = temp_serial_number;
            }
        }
    }

    printf("\nFCFS: ");
    for(i=0; i<n; i++){
        printf("%d, ", serial_number[i]);
    }

    //SJF
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(burst_time[i]>burst_time[j]){
                temp_serial_number = serial_number[i];
                serial_number[i] = serial_number[j];
                serial_number[j] = temp_serial_number;
            }
        }
    }

    printf("\nSJF: ");
    for(i=0; i<n; i++){
        printf("%d, ", serial_number[i]);
    }

    //priority based
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(priority_based[i]>priority_based[j]){
                temp_serial_number = serial_number[i];
                serial_number[i] = serial_number[j];
                serial_number[j] = temp_serial_number;
            }
        }
    }

    printf("\nPBS: ");
    for(i=0; i<n; i++){
        printf("%d, ", serial_number[i]);
    }

    //add scanf to detect which prog
}
