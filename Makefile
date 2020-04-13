#make -f
#Shimon Mimoun 

CC=g++
CFLAGS = -std=c++0x -g 

a.out: Document.o Editor.o main.o 
	$(CC) $(CFLAGS) -o a.out Document.o Editor.o main.o
Document.o: Document.h Document.cpp 
	$(CC) $(CFLAGS) -c Document.cpp -o Document.o
Editor.o: Editor.h Editor.cpp  
	$(CC) $(CFLAGS) -c Editor.cpp -o Editor.o
main.o: main.cpp 
	$(CC) $(CFLAGS) -c main.cpp -o main.o
clean:
	rm *.o a.out

