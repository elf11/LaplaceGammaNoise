CPPFLAGS=-std=c++11 -stdlib=libc++ -Weverything

main: main.o gamma.o laplace.o random.o
	clang++ $(CPPFLAGS) -o main main.o gamma.o laplace.o random.o

main.o: main.cc
	clang++ $(CPPFLAGS) -c main.cc

gamma.o: gamma.cc gamma.hh
	clang++ $(CPPFLAGS) -c gamma.cc

laplace.o: laplace.cc laplace.hh
	clang++ $(CPPFLAGS) -c laplace.cc

random.o: random.cc random.hh
	clang++ $(CPPFLAGS) -c random.cc

all: main ;

clean:
	rm -f main *.o
