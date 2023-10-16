all: menu.o abs_max.o abs_min.o diff.o sum.o data_input.o data_output.o
	gcc -std=c99 menu.o abs_max.o abs_min.o diff.o sum.o data_input.o data_output.o -o menu
menu.o: menu.c data_input.h data_output.h
	gcc -c -std=c99 menu.c
abs_max.o: abs_max.c abs_max.h
	gcc -c -std=c99 abs_max.c
abs_min.o: abs_min.c abs_min.h
	gcc -c -std=c99 abs_min.c
diff.o: diff.c diff.h
	gcc -c -std=c99 diff.c
sum.o: sum.c sum.h
	gcc -c -std=c99 sum.c
data_input.o: data_input.c data_input.h
	gcc -c -std=c99 data_input.c
data_output: data_output.c data_output.h abs_max.h abs_min.h diff.h sum.h
	gcc -c -std=c99 data_output.c
