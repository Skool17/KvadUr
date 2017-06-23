.PHONY: clean all test 
CFLAGS = -Wall -Werror -MP -MMD 

all: bin/KvadUr.exe 

bin/KvadUr.exe: build/Mainprogram.o build/diskr.o 
	gcc $(CFLAGS) build/Mainprogram.o build/diskr.o -o bin/KvadUr.exe -lm

build/Mainprogram.o: src/Mainprogram.c src/diskr.h
	gcc $(CFLAGS) -c src/Mainprogram.c -o build/Mainprogram.o -lm

build/diskr.o: src/diskr.c src/diskr.h 
	gcc $(CFLAGS) -c src/diskr.c -o build/diskr.o -lm

clean:
	@echo "Cleaning files in build directory" 	
	@rm -rf build/*.d build/*.o 
	@echo "Cleaning binaries"
	@rm -rf bin/KvadUr.exe 
	@echo "All files have been cleaned."	

-include build/*.d
