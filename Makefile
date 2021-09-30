NAME = libasm.a

SRCS = ft_strlen.s ft_write.s ft_read.s ft_strcpy.s ft_strcmp.s ft_strdup.s

OBJS = ${SRCS:.s=.o}

RM = rm -f

FLAGS = -f elf64

all: ${NAME}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o: %.s
	nasm ${FLAGS} -o $@ $<

clean:
	${RM} ${OBJS} main.o

fclean: clean
	${RM} ${NAME} test.out

re: fclean all

test: re
	gcc -no-pie ${OBJS} -L. -lasm main.c -o ./test.out

.PHONY : all clean fclean re 