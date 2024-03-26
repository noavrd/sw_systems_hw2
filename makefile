.PHONY: clean all

CC = gcc
FLAGS = -g -Wall

all: my_graph my_Knapsack

clean:
	rm -f *.o my_graph my_Knapsack my_mat.a

my_Knapsack: my_Knapsack.o
	$(CC) $(FLAGS) my_Knapsack.o -o my_Knapsack

my_Knapsack.o: my_Knapsack.c 
	$(CC) $(FLAGS) -c my_Knapsack.c

my_graph: my_graph.o my_mat.o
	$(CC) $(FLAGS) my_graph.o my_mat.o -o my_graph

my_graph.o: my_graph.c my_mat.h
	$(CC) $(FLAGS) -c my_graph.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

my_mat.a: my_mat.o
	ar -rcs my_mat.a my_mat.o
