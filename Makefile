# Brittany Saunders, Samuel Akinmulero
# June 20, 2018
# CS570 Summer 2018
# Guy Leonard
# Assignment 2
# Name of file: Makefile

all:
	g++ fileeditor.cpp	-lpthread	-std=gnu++11	-o	filem

clean:
	rm -r -- */	*.txt	*.bak	filem