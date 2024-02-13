.PHONY : 
all: clean

clean :
	rm *.o



my_graph : my_graph.o my_mat.o

my_graph.o : my_graph.c my_mat.h
	gcc -c  my_graph.c -o my_graph.o 

my_mat.o : my_mat.c my_mat.h
	gcc -c my_mat.c -o my_mat.o 