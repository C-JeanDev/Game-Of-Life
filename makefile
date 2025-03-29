link: main.o cell.o grid.o
	gcc main.o cell.o grid.o -o game.out -lraylib -lm -lGL -lpthread -ldl -lrt -lX11

main.o: 
	gcc -c src/main.c -Iinclude

cell.o: 
	gcc -c include/cell.c -Iinclude

grid.o:
	gcc -c include/grid.c -Iinclude

clean: 
	rm -f *.o *.out
