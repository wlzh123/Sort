CC = g++
Quik_sort:QuikSort.o
	$(CC) -o Quik_sort  QuikSort.o
QuikSort.o:QuikSort.cpp
	 $(CC) -c QuikSort.cpp
.PHONY:clean
clean:
	rm QuikSort.o
