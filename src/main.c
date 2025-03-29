#include <raylib.h>
#include <stdio.h>

#include "../include/grid.h"

#define WIDTH 1200
#define HEIGHT 800
#define CELL_SIZE 20

int main(){

	const int FPS = 60;

	char window_name[] = "Conway's Game of Life";
	InitWindow(WIDTH, HEIGHT, window_name);
	SetTargetFPS(FPS);
	

	const int rows = WIDTH/CELL_SIZE;
	const int columns = HEIGHT/CELL_SIZE;

	Cell cells [rows][columns];
	Grid grid = create_grid(HEIGHT,WIDTH,rows,columns,CELL_SIZE);

	initialize_cells(grid,cells);
	
	rise_cell(cells[20][20]);
	rise_cell(cells[21][20]);
	rise_cell(cells[22][20]);
	rise_cell(cells[21][19]);
	rise_cell(cells[22][21]);

	while(!WindowShouldClose()){
		
		BeginDrawing();
		ClearBackground(BLACK);
		
		draw_grid(grid);

		update_cells(grid,cells);
		
		draw_cells(grid,cells);	
		
		

		EndDrawing();

	}
	
	CloseWindow();

	return 0;
}


