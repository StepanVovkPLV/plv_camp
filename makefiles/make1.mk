test: src1.c
	gcc -c -o target src1.c

clean: 
	rm -rf *.o