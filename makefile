build\Calculate: build\main.o build\calculate.o
	clang++ build\main.o build\calculate.o -o build\Calculate.exe

build\main.o: src\main.cpp
	clang++ -c src\main.cpp -o build\main.o

build\calculate.o: lib\calculate.cpp
	clang++ -c lib\calculate.cpp -o build\calculate.o

clean:
	del build\*.o

install:
	copy build\Calculate.exe C:\Users\EndKing\Desktop\Calculate.exe