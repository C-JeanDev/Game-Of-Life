link: main.o
	gcc main.o -o game.out -lraylib -lm -lGL -lpthread -ldl -lrt -lX11

main.o: 
	gcc -c src/main.c -Iinclude

clean: 
	rm -f *.o *.out
