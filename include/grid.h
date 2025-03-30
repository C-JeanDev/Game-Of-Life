#include "cell.h"

typedef struct grid {
	int height;
	int width;
	int rows;
	int columns;
	int cell_size;
	
}Grid;

void draw_grid(Grid * grid);
void count_alive_cells(Grid * grid, Cell cells[][grid->columns],int * population);
void draw_cells(Grid *grid, Cell cells[][grid->columns]);
void update_cells(Grid *grid,Cell cells[][grid->columns]);
void initialize_cells(Grid *grid ,Cell cells[][grid->columns]);
int check_neighbors(int columns, Cell cells[][columns], int i , int j);
Grid create_grid(int height, int width, int rows, int columns, int cell_size);
