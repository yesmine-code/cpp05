NAME	= BureaucratForm
SRCS	=	main.cpp Bureaucrat.cpp Form.cpp

INCLUDES =

OBJS	=	${SRCS:.cpp=.o}

CC	=	clang++

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<


all:	${NAME}

${NAME}:	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		${RM} ${OBJS}

fclean:
		${RM} ${OBJS}
		${RM} ${NAME}
re:	fclean all

.PHONY:	all clean fclean re