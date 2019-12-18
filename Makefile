CC	= gcc

RM	= rm -f

NAME	= libftprintf.a

MANDATORY = 	./lib/ft_memset.c\
				./lib/ft_write.c\
				./lib/ft_strlen.c\
				./lib/ft_strncpy.c\
				./lib/ft_atoi.c\
				./lib/ft_calloc.c\
				./lib/ft_substr.c\
				./lib/ft_itoa_base.c\
				./lib/ft_unitoa_base.c\
				./lib/ft_itoahexa.c\
				./lib/ft_strjoin.c\
				./src/type/ft_type_pourcent.c\
				./src/type/ft_typeC.c\
				./src/type/ft_typeD.c\
				./src/type/ft_typeP.c\
				./src/type/ft_typeS.c\
				./src/type/ft_typeU.c\
				./src/type/ft_typeX.c\
				./src/type/ft_typeXmaj.c\
				./src/ft_getopt.c\
				./src/ft_printf.c\
				./src/ft_struct_print.c\

MANDATORY_SRCS	=	${MANDATORY}

MANDATORY_OBJS	= ${MANDATORY_SRCS:.c=.o}


CFLAGS	= -g -Wall -Wextra -Werror

${NAME}: ${MANDATORY_OBJS}
			ar rc ${NAME} ${MANDATORY_OBJS}
			ranlib ${NAME}

all: ${NAME}

bonus:	${BONUS_OBJS} ${NAME}

clean:
	${RM} ${BONUS_OBJS} ${MANDATORY_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all bonus

.PHONY: all clean fclean re
