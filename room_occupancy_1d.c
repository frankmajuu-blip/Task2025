/*
Name: NDUNGU FRANCIS
Reg: CT100/G/26209/25
Description: 
A C program that stimulate a hotels room occupancy for only 1 branch by use of a 2D 
Array.
Programm Name:Room Occupancy Tracker 
*/

#include <stdio.h>
#include <stdlib.h>  

int main() {
    int occupancy[5][10];  // 5 floors, 10 rooms each
    int floor, room;
    int occupied, vacant;

    printf("Room Occupancy (One Branch) \n");

    // loop trough each floor
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        //loop through each room on the floor

        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;  // random 0 or 1

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        //display the results for the floor

        printf("Floor %d Occupied: %d | Vacant: %d\n",
               floor + 1, occupied, vacant);
    }

    return 0;
}
