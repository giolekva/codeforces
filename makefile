# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

.PHONY = all clean

# Compiler to use
CC = gcc

SRCS := $(wildcard *.c)
BINS := $(SRCS:%.c=%)
OUT := $(foreach c, $(BINS), $(c).out)

all: ${BINS}

%: %.c
	${CC} -o $@.out $<

clean:
	rm -rvf ${OUT}
