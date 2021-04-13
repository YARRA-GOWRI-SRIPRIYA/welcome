all.exe:add.c even.c square.c test.c
	gcc add.c even.c square.c test.c -o all.exe
run:all.exe
	all.exe