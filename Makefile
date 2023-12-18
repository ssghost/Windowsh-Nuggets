dllmake.dll: dll-maker.cpp
	gcc -c dll-maker::DllMake -o dllmake.dll
loader.o: dll-maker.cpp
	gcc -c dll-maker::Loader -0 loader.o
