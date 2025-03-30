#include <raylib.h>
#include <stdio.h>

#include "../include/grid.h"

#define WIDTH 1200
#define HEIGHT 800
#define CELL_SIZE 10

void draw_text(int, int);

int main(){

	int fps = 30;

	char window_name[] = "Conway's Game of Life";
	InitWindow(WIDTH, HEIGHT, window_name);
	
	const int columns = WIDTH/CELL_SIZE;
	const int rows = HEIGHT/CELL_SIZE;

	Cell cells [rows][columns];
	Grid grid = create_grid(HEIGHT,WIDTH,rows,columns,10);

	initialize_cells(&grid,cells);
	
	// Just for Testing Soon will be implemented click to rise

	rise_cell(cells[20][20]);
	rise_cell(cells[21][20]);
	rise_cell(cells[22][20]);
	rise_cell(cells[21][19]);
	rise_cell(cells[22][21]);
	
	rise_cell(cells[50][50]);
	rise_cell(cells[51][50]);
	rise_cell(cells[52][50]);
	rise_cell(cells[51][49]);
	rise_cell(cells[52][51]);

	rise_cell(cells[50][80]);
	rise_cell(cells[51][80]);
	rise_cell(cells[52][80]);
	rise_cell(cells[51][79]);
	rise_cell(cells[52][81]);

	rise_cell(cells[60][80]);
	rise_cell(cells[61][80]);
	rise_cell(cells[62][80]);
	rise_cell(cells[61][79]);
	rise_cell(cells[62][81]);

	rise_cell(cells[70][80]);
	rise_cell(cells[71][80]);
	rise_cell(cells[72][80]);
	rise_cell(cells[71][79]);
	rise_cell(cells[72][81]);

	rise_cell(cells[20][90]);
	rise_cell(cells[21][90]);
	rise_cell(cells[22][90]);
	rise_cell(cells[21][89]);
	rise_cell(cells[22][91]);

	int population = 0;
	int generation = 0;
	int is_paused = 1;

	while(!WindowShouldClose()){
		
		BeginDrawing();
		ClearBackground(BLACK);
		
		draw_grid(&grid);
		draw_cells(&grid,cells);	
		draw_text(population,generation);	

		EndDrawing();
		
		if (IsKeyPressed(KEY_SPACE)){
			is_paused = !is_paused;
		}

		if (!is_paused){
			update_cells(&grid,cells);
			generation++;
		}else{
			// Here you can click to rise_cell;
			DrawText("Paused",(WIDTH/2)-100,HEIGHT/2,50,WHITE);

			if (IsKeyPressed(KEY_C)){
				clear_grid(&grid,cells);	
			}

			if (IsKeyPressed(KEY_UP) && fps < 120)
				fps++;
			if(IsKeyPressed(KEY_DOWN) && fps > 30)
				fps--;
		}

		count_alive_cells(&grid,cells,&population);	
		
		SetTargetFPS(fps);
	}
	
	CloseWindow();

	return 0;
}

void draw_text(int population, int generation){
	
	char str_population[20];
	char str_generation[20];

	sprintf(str_population,"Population : %d",population);
	sprintf(str_generation,"Generation : %d",generation);

	DrawText(str_population, 10,10, 20, WHITE);
	DrawText(str_generation, 200,10, 20, WHITE);
}
