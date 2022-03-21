#
# makefile
# vini84200, 2022-03-20 19:55
#

all: main_abp
	./main_abp

debug: main_abp
	gdb ./main_abp

main_abp: main.o abp.o
	gcc -o main_abp main.o abp.o -g

main.o: main.c abp.h
	gcc -o main.o main.c -c -Wall -g

abp.o: abp.c abp.h
	gcc -o abp.o abp.c -c -Wall -g
	
clean:
	rm -rf *.o *~ main_abp

# vim:ft=make
#
