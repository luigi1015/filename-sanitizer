.PHONY: all clean

filename-sanitizer: filename-sanitizer.c
	gcc -o filename-sanitizer filename-sanitizer.c

all: filename-sanitizer

clean:
	rm *.o filename-sanitizer
