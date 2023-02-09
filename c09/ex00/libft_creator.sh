gcc -c ft_putchar.c 
gcc -c ft_strcmp.c 
gcc -c ft_putstr.c 
gcc -c ft_swap.c 
gcc -c ft_strlen.c
ar -r libft.a ft_putchar.o ft_strcmp.o ft_putstr.o ft_swap.o ft_strlen.o
rm *.o

