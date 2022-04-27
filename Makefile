# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 14:56:56 by pmillan-          #+#    #+#              #
#    Updated: 2022/04/27 17:30:50 by pmillan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libftprintf.a
# CC = gcc
# CFLAGS = -Wall -Werror -Wextra

# SOURCE = ft_printf.c ft_put_c.c ft_put_i_d.c ft_put_p_x.c ft_strlcpy.c ft_strlen.c ft_variables.c ft_strlcpy.c \
# ft_strlen.c
# OBJECTS = $(SOURCE:.c=.o)

# $(NAME): $(OBJECTS)
# 		ar rcs $(NAME) $(OBJECTS)

# all: $(NAME)
# #bonus: $(NAME)
# .PHONY: clean fclean
# clean:
# 		rm -rf $(OBJECTS)
# fclean: clean
# 		rm -rf $(NAME)
# re: fclean all
NAME    = libftprintf.a
SRCS    = ft_printf.c ft_put_c.c ft_put_s.c ft_put_i_d.c ft_put_u.c ft_put_p_x.c ft_strlcpy.c ft_strlen.c ft_variables.c ft_strlcpy.c \
 ft_strlen.c
OBJS    = ${SRCS:.c=.o}
CC  = gcc
RM  = rm -rf
FLAGS   = -Wall -Werror - Wextra
$(NAME):	${OBJS}
			ar rcs ${NAME} ${OBJS}
#ranlib ${NAME}
#.c.o:	${CC} ${FLAGS} -c $< -o ${<:.c=.o}
all:	${NAME}
clean:
		${RM} ${OBJS} a.out
fclean: clean
		${RM} ${NAME}
re:		fclean all
.PHONY:	all clean fclean re libft