NAME	=	karenFilter

SRCS	=	main.cpp Karen.cpp

INCLUDES = incl

OBJS	=	${SRCS:.cpp=.o}

CC	=	c++

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<


all:	${NAME}

${NAME}:	$(OBJS)
			$(CC) $(CFLAGS) -I  $(INCLUDES) -o $(NAME) $(OBJS)

clean:
		${RM} ${OBJS}

fclean:
		${RM} ${OBJS}
		${RM} ${NAME}
re:	fclean all

.PHONY:	all clean fclean re