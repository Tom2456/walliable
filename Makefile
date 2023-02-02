all: walliable clean

walliable:
	cd build && gcc -c ../*.c
	gcc -o walliable build/*.o

clean:
	rm build/*

install:
	sudo mv walliable /bin/
