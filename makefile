main : main.o Lorenz.o initial_coordinates.o set_parameter.o tracer_courbe.o
	gcc main.o Lorenz.o initial_coordinates.o set_parameter.o tracer_courbe.o -o main

main.o : main.c main.h 
	gcc -c -Wall main.c

Lorenz.o : Lorenz.c
	gcc -c -Wall Lorenz.c

set_parameter.o : set_parameter.c
	gcc -c -Wall set_parameter.c

initial_coordinates.o : initial_coordinates.c
	gcc -c -Wall initial_coordinates.c

tracer_courbe.o : tracer_courbe.c
	gcc -c -Wall tracer_courbe.c
	
clean :rm*.o
