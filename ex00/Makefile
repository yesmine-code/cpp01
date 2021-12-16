# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybesbes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 12:18:44 by ybesbes           #+#    #+#              #
#    Updated: 2021/12/16 12:18:48 by ybesbes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	brainz

SRCS	=	Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

OBJS	=	${SRCS:.cpp=.o}

CC	=	c++

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

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