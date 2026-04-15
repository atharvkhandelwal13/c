gcc -c linearsearch.c
gcc -c search_main.c
gcc -o search_exe linearsearch.o search_main.o
./search_exe