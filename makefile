build\Calculate: build\main.o build\calculate.o
	clang++ build\main.o build\calculate.o -o build\Calculate.exe
	del build\*.o

build\main.o: src\main.cpp
	clang++ -c src\main.cpp -o build\main.o

build\calculate.o: lib\calculate.cpp
	clang++ -c lib\calculate.cpp -o build\calculate.o

install:
	md "C:\Program Files\Calculate"
	copy /y build\Calculate.exe "C:\Program Files\Calculate\Calculate.exe"