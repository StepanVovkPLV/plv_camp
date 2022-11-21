PROGRAM = calculation
LIBRARY = libcalc.a
CHECKS = -Wall -Werror -Wextra


calculation: main.c lib
	gcc ${CHECKS} main.c -L. -l calc -lm -o ${PROGRAM}

links: 
	gcc ${CHECKS} -c *.c

lib: links
	ar -rc ${LIBRARY} *.o
	ranlib ${LIBRARY}

clean:
	rm -f *.o

clean-all: clean
	rm -f ${PROGRAM}
	rm -f ${LIBRARY}