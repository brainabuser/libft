# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krengar <krengar@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/23 18:49:17 by krengar           #+#    #+#              #
#    Updated: 2020/11/11 19:12:39 by krengar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_strlen.c ft_atoi.c \
	ft_isalpha.c ft_bzero.c \
	ft_isdigit.c ft_isprint.c \
	ft_toupper.c ft_tolower.c \
	ft_strncmp.c ft_memset.c \
	ft_memcpy.c ft_memccpy.c \
	ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_isalnum.c \
	ft_isascii.c ft_strchr.c \
	ft_strrchr.c ft_strlcpy.c \
	ft_strlcat.c ft_strnstr.c \
	ft_calloc.c ft_strdup.c \
	ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c \
	ft_strjoin.c ft_substr.c \
	ft_strtrim.c ft_strmapi.c \
	ft_itoa.c ft_split.c \

BONUS_SRC= ft_lstnew.c ft_lstadd_front.c \
	ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c \

DEP = libft.h
OBJ = ${SRC:.c=.o}
BONUS_OBJ = ${BONUS_SRC:.c=.o}

NAME = libft.a

CC = gcc
RM = /bin/rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -include ${DEP} -o ${<:.c=.o}

$(NAME): ${OBJ}
	ar rc ${NAME} ${OBJ}

bonus: ${BONUS_OBJ} ${OBJ}
	ar rc ${NAME} ${BONUS_OBJ} ${OBJ}

all: ${DEP} ${NAME}

clean:
	${RM} ${OBJ} ${BONUS_OBJ}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY =	all clean fclean re
.DEFAULT_GOAL =	all
