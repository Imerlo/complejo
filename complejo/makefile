# Proyecto ejemplo para Implementacion de una clase de Complejos
# Archivos: complex.hpp complex.cpp main_complex.cpp

all:   complex.exe


complex.exe: complex.obj main.obj
	gpp -Wall -o complex.exe complex.obj main.obj

complex.obj:	complex.cpp complex.hpp
	gpp -Wall -c -o complex.obj complex.cpp

main.obj: main_complex.cpp complex.hpp
	gpp -Wall -c -o main.obj main_complex.cpp



clean:
	del *.obj

