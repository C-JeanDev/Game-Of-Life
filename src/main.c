#include <raylib.h>
#include "../include/cell.h"

#define WIDTH 1200
#define HEIGHT 800
#define CELL_SIZE 20

void draw_grid(int, int);
void initialize_cells(int rows, int columns,Cell cell[rows][columns]);
void draw_cells(int rows, int columns,Cell cell[rows][columns]);

int main(){

	const int FPS = 60;

	char window_name[] = "Conway's Game of Life";
	InitWindow(WIDTH, HEIGHT, window_name);
	SetTargetFPS(FPS);
	

	const int rows = WIDTH/CELL_SIZE;
	const int columns = HEIGHT/CELL_SIZE;
	Cell cells [rows][columns];
	
	initialize_cells(rows,columns,cells);
	
	rise_cell(cells[10][10]);
	rise_cell(cells[11][10]);
	rise_cell(cells[11][11]);

	while(!WindowShouldClose()){
		
		BeginDrawing();
		ClearBackground(BLACK);
		
		draw_grid(rows,columns);
		draw_cells(rows,columns,cells);	
		
		EndDrawing();

	}
	
	CloseWindow();

	return 0;
}

void initialize_cells(int rows, int columns,Cell cells[rows][columns]){
	
	for (int i = 0; i<rows;i++){
		for (int j = 0; j < columns;j++){
			cells[i][j] = create_cell(i,j,CELL_SIZE);
		}
	}
	
}

void draw_cells(int rows, int columns, Cell cells[rows][columns]){

	for (int i = 0; i< rows; i++){
		for (int j = 0; j < columns; j++){
			if (is_alive(cells[i][j])){
				draw_cell(cells[i][j]);
			}
		}
	}

} 

void draw_grid(int rows, int columns){

		for (int i = 0; i<= rows; i++){
			DrawLine(i*CELL_SIZE,0,i*CELL_SIZE, HEIGHT, WHITE);
		}

		for (int i = 0; i <= columns; i++){
			DrawLine(0,i*CELL_SIZE,WIDTH,i*CELL_SIZE,WHITE);
		} 
		
}

