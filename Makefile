dllmake.dll:
	gcc -c dll-maker::DllMake -o dllmake.dll
loader.o:
	gcc -c dll-maker::Loader -0 loader.o
	