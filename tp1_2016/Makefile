CFLAGS := -g -std=c99 -Wall -Werror -Wformat=2 -MMD
CFLAGS += -Wshadow -Wpointer-arith -Wunreachable-code
CFLAGS += -Wconversion -Wno-sign-conversion -Wbad-function-cast

MAIN := tac tail words
SRCS := $(wildcard *.c)
LIBS := $(filter-out $(MAIN:%=%.o), $(SRCS:%.c=%.o))

all: $(MAIN)

clean:
	rm -f $(MAIN) *.o *.d

$(MAIN): %: %.o $(LIBS)

-include $(SRCS:%.c=%.d)

.PHONY: all clean
