.PHONY: all

CC = gcc                        # compiler to use

SRCS := $(wildcard *.c)
BINS := $(SRCS:%.c=%)

all: ${BINS}

%: %.c
				${CC} ${@}.c -o $@

clean:
				rm -rvf ${BINS}
