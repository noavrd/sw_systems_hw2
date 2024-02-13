.PHONY : all clean
all: my_graph my_Knapsack
FLAGS= -g -Wall

clean :
	rm *.o
	rm my_graph
	rm my_Knapsack
	rm * .a
	rm -f

my_Knapsack : my_Knapsack.o
	gcc -o my_Knapsack my_Knapsack.o

my_Knapsack.o: my_Knapsack.c 
	gcc $(FLAGS) -c my_Knapsack.c -o	my_Knapsack.o

my_graph : my_graph.o my_mat.o
	gcc $(FLAGS)  my_graph.o my_mat.o -o my_graph

my_graph.o : my_graph.c my_mat.h
	gcc $(FLAGS) -c my_graph.c 

my_mat.o : my_mat.c my_mat.h
	gcc $(FLAGS) -fPIC -c my_mat.c 

my_mat.a: my_mat.o
	ar -rcs my_mat.a my_mat.o