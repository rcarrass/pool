CC=gcc
CFLAGS=-Wall -Wextra -Werror
LDFLAGS=
EXEC=day03

all: $(EXEC)

day03: main.o ex02/ft_swap.o ex05/ft_putstr.o ex06/ft_strlen.o \
	ex07/ft_strrev.o ex08/ft_atoi.o ex09/ft_sort_integer_table.o
	$(CC) -o $@ $^ $(LDFAGS)

day03.o: ex02/ft_swap.c ex05/ft_putstr.c ex06/ft_strlen.c \
	ex07/ft_strrev.c ex08/ft_atoi.c ex09/ft_sort_integer_table.c
	$(CC) -o $@ -c $< $(CFLAGS)

main.o: main.c ex02ft_swap.h ex05/ft_putstr.h ex06/ft_strlen.h \
	ex07/ft_strrev.h ex08/ft_atoi.h ex09/ft_sort_integer_table.h
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf */*.o

fclean: clean
	rm -rf $(EXEC)
