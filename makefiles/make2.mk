test: src2.c
	gcc -c -o target2 src1.c

clean: 
	rm -rf *.o