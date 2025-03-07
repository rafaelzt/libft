# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 21:46:19 by rzamolo-          #+#    #+#              #
#    Updated: 2025/03/07 15:05:53 by rzamolo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
NAME = libft.a
RM = rm -rf

################################################################################
##							DIRECTORIES									  	  ##
################################################################################
BIN_DIR = bin
INC_DIR = inc
SRC_DIR = src
OBJ_DIR = obj
TST_DIR = test

################################################################################
##								MANDATORY									  ##
################################################################################
CFILES = \
		$(SRC_DIR)/ft_isalpha.c \
		$(SRC_DIR)/ft_isdigit.c \
		$(SRC_DIR)/ft_isalnum.c \
		$(SRC_DIR)/ft_isascii.c \
		$(SRC_DIR)/ft_isprint.c \
		$(SRC_DIR)/ft_strlen.c \
		$(SRC_DIR)/ft_memset.c \
		$(SRC_DIR)/ft_bzero.c \
		$(SRC_DIR)/ft_memcpy.c \
		$(SRC_DIR)/ft_memmove.c \
		$(SRC_DIR)/ft_strlcpy.c \
		$(SRC_DIR)/ft_strlcat.c \
		$(SRC_DIR)/ft_toupper.c \
		$(SRC_DIR)/ft_tolower.c \
		$(SRC_DIR)/ft_strchr.c \
		$(SRC_DIR)/ft_strrchr.c \
		$(SRC_DIR)/ft_strncmp.c \
		$(SRC_DIR)/ft_memchr.c \
		$(SRC_DIR)/ft_memcmp.c \
		$(SRC_DIR)/ft_strnstr.c \
		$(SRC_DIR)/ft_atoi.c \
		$(SRC_DIR)/ft_calloc.c \
		$(SRC_DIR)/ft_strdup.c \
		$(SRC_DIR)/ft_substr.c \
		$(SRC_DIR)/ft_strjoin.c \
		$(SRC_DIR)/ft_strtrim.c \
		$(SRC_DIR)/ft_split.c \
		$(SRC_DIR)/ft_itoa.c \
		$(SRC_DIR)/ft_strmapi.c \
		$(SRC_DIR)/ft_striteri.c \
		$(SRC_DIR)/ft_putchar_fd.c \
		$(SRC_DIR)/ft_putstr_fd.c \
		$(SRC_DIR)/ft_putendl_fd.c \
		$(SRC_DIR)/ft_putnbr_fd.c
#- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - #

################################################################################
##									BONUS									  ##
################################################################################
CBONUS = \
		$(SRC_DIR)/ft_lstnew.c \
		$(SRC_DIR)/ft_lstadd_front.c \
		$(SRC_DIR)/ft_lstsize.c \
		$(SRC_DIR)/ft_lstlast.c \
		$(SRC_DIR)/ft_lstadd_back.c \
		$(SRC_DIR)/ft_lstdelone.c \
		$(SRC_DIR)/ft_lstclear.c \
		$(SRC_DIR)/ft_lstiter.c \
		$(SRC_DIR)/ft_lstmap.c
#- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - #
OBJS = $(CFILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
BOBJS = $(CBONUS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
################################################################################

################################################################################
.PHONY: all re fclean clean bonus bclean
################################################################################
all:        bonus $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $^ -o $@

bonus: $(OBJS) $(BOBJS)
	@$(AR) $(NAME) $(OBJS) $(BOBJS)
			

re:     	fclean all

fclean: clean
	@$(RM) $(NAME)

clean:	bclean
	@$(RM) $(OBJS)

bclean:
	@$(RM) $(BOBJS)

# $<: rule target file (input)
# $@: rule source file (output)
