#include <stdio.h>

int main() {
    int seats[35][4] = {0};
    int row, seat;

    printf("Bus Seat Booking\n");
    printf("Rows: 1-35, Seats: 1-4");

    while (1) {
        
        printf("\nEnter row and seat number: ");
        scanf("%d %d", &row, &seat);

        if (seats[row-1][seat-1] == 0) {
            seats[row-1][seat-1] = 1;
            printf(" Seat is booked \n");
        } else {
            printf(" This Seat is already booked by someone \n");
        }
        break;

    }


    return 0;
}