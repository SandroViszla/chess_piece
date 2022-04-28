# for compiling: "make -f makefile.m"
# for clear: "make -f makefile.m clean"

chess : figure.o chesslib.o chess.cpp
	g++ -o chess chess.cpp chesslib.o figure.o

figure.o : figure.hpp figure.cpp
	g++ -c figure.cpp -o figure.o

chesslib.o : chesslib.hpp chesslib.cpp figure.o
	g++ -c chesslib.cpp -o chesslib.o

clean :
	rm *.o chess+