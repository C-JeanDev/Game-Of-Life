#include <raylib.h>
#include <stdlib.h>
#include "cell.h"

struct cell{
	
	int alive;
	int x;
	int y;
	int size;
	
};

Cell create_cell(int x, int y, int size){
	
	Cell new_cell = malloc(sizeof(struct cell));

	new_cell -> x = x;
	new_cell -> y = y;
	new_cell -> size = size;
	new_cell -> alive = 0; 

	return new_cell;
}

void draw_cell(Cell cell){
	
	if (cell->alive){
		DrawRectangle(cell->y * cell->size, cell->x * cell->size, cell->size,cell->size,WHITE);
	}

}

int is_alive(Cell cell){
	return cell->alive;
}

void kill_cell(Cell cell){
	cell->alive = 0;
}

void rise_cell(Cell cell){
	cell->alive = 1;
}

