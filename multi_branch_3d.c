/*
Name: NDUNGU FRANCIS
Reg No: CT100/G/26209/25
Program Name: Multi-Branch Occupancy Tracker (3D Array)
Description:
This program models 3 hotel branches, each with 5 floors and 10 rooms per floor.
A 3D array chain[3][5][10].
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int chain[3][5][10];  // 3 branches, 5 floors, 10 rooms
    int branch, floor, room;
    int branchOccupied, totalOccupied = 0;

    printf(" MULTI-BRANCH OCCUPANCY (3 branches):\n");

    // Fill array with random occupancy and count
    for (branch = 0; branch < 3; branch++) {
        branchOccupied = 0;

        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;  
                if (chain[branch][floor][room] == 1) {
                    branchOccupied++;
                    totalOccupied++;
                }
            }
        }

        // Print occupied rooms for this branch
        printf("Branch %d -Occupied Rooms: %d\n", branch + 1, branchOccupied);
    }

    // Print grand total
    printf("\nTotal Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}
