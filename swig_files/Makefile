all : fft
fft : fft.go fft.o
	go build fft.o ; go build -o fft
fft.o : fft.c fft.h
	gcc -c fft.c
clean : 
	rm -r *o fft
