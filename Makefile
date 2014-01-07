# Compiling main
all : Main.o
	gcc -o bin/Main bin/Main.o

Main.o : src/Main.c
	gcc -c src/Main.c -o bin/Main.o

# Cleaning compilation
clean :
	rm -rf bin/*.o bin/*~
