typedef struct cell * Cell;

Cell create_cell(int x, int y, int size);
void draw_cell(Cell cell);
int is_alive(Cell cell);
void kill_cell(Cell cell);
void rise_cell(Cell cell);

