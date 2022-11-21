

all: clean build  run


run:
	cd build; open Maze.app


build: clean
	mkdir build
	cd build/; qmake ../Maze.pro
	make -C build/
	cd build/; rm -rf *.o *.cpp *.h Makefile
	cp -rf model/new_maze_1.txt $(HOME)/

install: build
	mkdir $(HOME)/Desktop/Maze/
	cp -rf build/Maze.app $(HOME)/Desktop/Maze/


uninstall:
	rm -rf $(HOME)/Desktop/Maze/
	rm -rf $(HOME)/new_maze_1.txt

dvi: 
	open -a "Google Chrome" description.html

dist: clean
	mkdir Dist
	tar --totals --create --verbose --file Dist/Maze.tar *

tests: clean
	g++ --coverage model/maze.cc model/throughmaze.cc tests.cc -o test -lstdc++ -lgtest -lgtest_main
	./test
	rm -rf *.o 


check:
	cppcheck --language=c++ --suppress=missingIncludeSystem model/*.cc controller/*.cc model/*.h controller/*.h view/*.h view/*.cpp

clang:
	cp ../materials/linters/.clang-format .clang-format
	clang-format -n model/*.cc controller/*.cc model/*.h controller/*.h
	rm -rf .clang-format



clean:
	rm -rf *.o *.a *.gcda *.gcno Maze test Maze.tar gcov_report build/ report/ test.info Dist/ *.out *.cfg
