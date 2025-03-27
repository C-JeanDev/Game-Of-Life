#include <raylib.h>

#define WIDTH 1200
#define HEIGHT 800


int main(){

	const int FPS = 60;

	char window_name[] = "Conway 's Game of Life";
	InitWindow(WIDTH, HEIGHT, window_name);
	SetTargetFPS(FPS);

	while(!WindowShouldClose()){
		
		BeginDrawing();

		ClearBackground(BLACK);

		EndDrawing();
	}
	
	CloseWindow();
	return 0;
}
