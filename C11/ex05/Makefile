NAME = do-op
SRCS = ./ft_putnbr.c\
	   ./ft_atoi.c\
	   ./ft_putstr.c\
	   ./do-op.c\
	   ./operation.c
HEAD = ./calcul.h
OBJS = ${SRCS:.c=.o}
CC = gcc
RM = rm -f
.c.o:	
	${CC} -Wall -Wextra -Werror -c $< -o ${<:.c=.o}
all : ${NAME}
${NAME}: ${OBJS}	
	 ${CC} -Wall -Wextra -Werror -o ${NAME} ${OBJS}
clean : 
	${RM} ${OBJS}
fclean : clean	
	${RM} ${NAME} 
re : fclean all
.PHONY : all clean fclean re
