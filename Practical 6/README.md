Updated by Siddhesh bagwe

Practical 6 has 2 files Practical6.c and matmult.c. matmult.c has the function matrix multiplication. This is included in the Practical.c file and can be compiled together as below

gcc -o Practical6.c   -- creating the file Practical.o
gcc -o matmult.c   -- creating the file matmult.o

gcc -o p6 Practical6.o matmult.o
