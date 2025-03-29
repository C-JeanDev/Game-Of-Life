#include "cell.h"

typedef struct grid {
	int height;
	int width;
	int rows;
	int columns;
	int cell_size;
	
}Grid;

void update_cells(Grid grid,Cell cells[grid.rows][grid.columns]);
Grid create_grid(int height, int width, int rows, int columns, int cell_size);
void initialize_cells(Grid grid ,Cell cells[grid.rows][grid.columns]);
void draw_cells(Grid grid, Cell cells[grid.rows][grid.columns]);
void draw_grid(Grid grid);
