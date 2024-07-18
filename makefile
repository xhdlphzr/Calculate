build\Calculate: src\main.cpp lib\calculate.cpp
	clang++ src\main.cpp lib\calculate.cpp -o build\Calculate.exe

clean:
	del build\*

install:
	md "C:\Program Files\Calculate"
	copy /y build\Calculate.exe "C:\Program Files\Calculate\Calculate.exe"