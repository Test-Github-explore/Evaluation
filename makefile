PROGRAM = output
OBJS = ARR30-C-1.c　ARR30-C-2.c
SRCS = $(OBJS:%.o=%.c)
CC = gcc
CFLASG =
LDFLAGS =

$(PROGRAM):$(OBJS)
        $(CC) $(CFLGAS) $(LDFLAGS) -o $(PROGRAM) $(OBJS) $(LDLIBS)
