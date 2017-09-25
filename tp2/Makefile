CFLAGS=-g
export CFLAGS

all:
	make clean && make build && make run

clean:
	@echo cleaning...
	rm -f ./${F}.o

build: clean
	@echo building ${F}...
	gcc ./${F}.c -o ./${F}.o

run: build
	@echo running...
	./${F}.o
