PROGRAM = output
OBJS = ARR30-C-5.c
SRCS = $(OBJS:%.o=%.c)
CC = gcc
CFLASG =
LDFLAGS =

$(PROGRAM):$(OBJS)
        $(CC) $(CFLGAS) $(LDFLAGS) -o $(PROGRAM) $(OBJS) $(LDLIBS)
