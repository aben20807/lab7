all: Mino.h Mino.cpp genMino.h genMino.cpp MinoI.h MinoI.cpp MinoJ.h MinoJ.cpp MinoO.h MinoO.cpp MinoS.h MinoS.cpp MinoT.h MinoT.cpp MinoL.h MinoL.cpp MinoZ.h MinoZ.cpp
	g++ -c Mino.h Mino.cpp
	g++ -c MinoI.h MinoI.cpp
	g++ -c MinoJ.h MinoJ.cpp
	g++ -c MinoS.h MinoS.cpp
	g++ -c MinoO.h MinoO.cpp
	g++ -c MinoT.h MinoT.cpp
	g++ -c MinoL.h MinoL.cpp
	g++ -c MinoZ.h MinoZ.cpp
	g++ -c genMino.h genMino.cpp
	g++ -o main main.cpp Mino.o genMino.o MinoI.o MinoJ.o MinoS.o MinoO.o MinoT.o MinoL.o MinoZ.o

clean:
	rm *.o

