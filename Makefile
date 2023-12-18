dllmake.dll: dll-maker.cpp
	gcc -c dll-maker::DllMake -o dllmake.dll
loader.o: dll-maker.cpp
	gcc -c dll-maker::Loader -o loader.o
