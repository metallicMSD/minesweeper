#include <stdio.h>
#include "grid.h"

void draw_grid(void) {
	//0 is empty and 1 is a mine
	int grid[ROWS][COLS] = {0};
	grid[2][2] = 1;

	for (int y = 0; y < ROWS; y++){

	for (int x = 0; x < COLS; x++){

	if (grid[y][x] == 1){

	printf("[X]");

	}else {

	printf("[ ]");

	}

	}
	printf("\n"); //move to the next row after printing all the columns
	}

}
