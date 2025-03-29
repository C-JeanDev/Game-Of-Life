#include <raylib.h>

#include "grid.h"


Grid create_grid(int height, int width, int rows, int columns, int cell_size){
	Grid grid;
	grid.height = height;
	grid.width = width;
	grid.rows = rows;
	grid.columns = columns;
	grid.cell_size = cell_size;

	return grid;
}

void initialize_cells(Grid grid,Cell cells[grid.rows][grid.columns]){
	
	for (int i = 0; i<grid.rows;i++){
		for (int j = 0; j < grid.columns;j++){
			cells[i][j] = create_cell(i,j,grid.cell_size);
		}
	}
	
}

void draw_cells(Grid grid, Cell cells[grid.rows][grid.columns]){

	for (int i = 0; i< grid.rows; i++){
		for (int j = 0; j < grid.columns; j++){
			if (is_alive(cells[i][j])){
				draw_cell(cells[i][j]);
			}
		}
	}

} 

void draw_grid(Grid grid){

		for (int i = 0; i<= grid.rows; i++){
			DrawLine(i*grid.cell_size,0,i*grid.cell_size, grid.height, WHITE);
		}

		for (int i = 0; i <= grid.columns; i++){
			DrawLine(0,i*grid.cell_size,grid.width,i*grid.cell_size,WHITE);
		} 
		
}

void update_cells(Grid grid,Cell cells[grid.rows][grid.columns]){
	static int i = 1;
	static int j = 1;
	const int r = grid.rows;
	// if (i == grid.rows-1)
		// i = 1;

	int temp_state[60][40] = {0};

	for(int i = 1; i < grid.rows - 1; i++) {
		for(int j = 1; j < grid.columns - 1; j++) {
			int count = 0;

			if (is_alive(cells[i-1][j-1])) count++;
			if (is_alive(cells[i-1][j])) count++;
			if (is_alive(cells[i-1][j+1])) count++;
			if (is_alive(cells[i][j-1])) count++;
			if (is_alive(cells[i][j+1])) count++;
			if (is_alive(cells[i+1][j-1])) count++;
			if (is_alive(cells[i+1][j])) count++;
			if (is_alive(cells[i+1][j+1])) count++;

			if (is_alive(cells[i][j])) {  
			    temp_state[i][j] = (count == 2 || count == 3); 
			} else {
			    temp_state[i][j] = (count == 3); 
			}
		}
	}

	for(int i = 1; i < grid.rows - 1; i++) {
		for(int j = 1; j < grid.columns - 1; j++) {
			if (temp_state[i][j] && !is_alive(cells[i][j])) {
				rise_cell(cells[i][j]);  
			} 
			else if (!temp_state[i][j] && is_alive(cells[i][j])) {
				kill_cell(cells[i][j]);  
			}
		}
	}
}

