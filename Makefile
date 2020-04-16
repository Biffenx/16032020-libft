# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwilen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 08:50:12 by jwilen            #+#    #+#              #
#    Updated: 2020/01/07 07:30:14 by jwilen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

LIBFT_SRC = 	ft_atoi.c ft_memset.c ft_strlcat.c ft_bzero.c ft_putchar.c ft_strlen.c \
	  ft_countwords.c ft_putchar_fd.c ft_strmap.c ft_getintlen.c ft_putendl.c \
	  ft_strmapi.c ft_isalnum.c ft_putendl_fd.c ft_strncat.c ft_isalpha.c \
	  ft_putnbr.c ft_strncmp.c ft_isascii.c ft_putnbr_fd.c ft_strncpy.c \
	  ft_isdigit.c ft_putstr.c ft_strnequ.c ft_islower.c ft_putstr_fd.c \
	  ft_strnew.c ft_isprint.c ft_strcat.c ft_strnstr.c ft_istherewhitespaces.c \
	  ft_strchr.c ft_strrchr.c ft_isupper.c ft_strclr.c ft_strsplit.c ft_itoa.c \
	  ft_strcmp.c ft_strstr.c ft_memalloc.c ft_strcpy.c ft_strsub.c ft_memccpy.c \
	  ft_strdel.c ft_strtrim.c ft_memchr.c ft_strdup.c ft_tolower.c ft_memcmp.c \
	  ft_strequ.c ft_toupper.c ft_memcpy.c ft_striter.c ft_wordlength.c \
	  ft_memdel.c ft_striteri.c ft_memmove.c ft_strjoin.c ft_lstnew.c \
	  ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
	  get_next_line.c ft_word_count.c ft_isspace.c ft_abs.c ft_ftoa.c \
	ft_strrev.c ft_itoa_b.c ft_itoa_umax.c ft_memset.c ft_pow.c ft_strlcat.c \
	ft_toupper_str.c \
	
FT_PRINTF_DIR = ./ft_printf/

FT_PRINTF_SRC_DIR = $(FT_PRINTF_DIR)srcs/

FT_PRINTF_SRC = machine.c specifer.c specifer_percent.c specifer_c.c specifer_s.c \
		specifer_d.c specifer_d_alfa.c specifer_d_beta.c specifer_d_gamma.c \
		specifer_d_delta.c specifer_d_epsilon.c specifer_u.c specifer_u_alfa.c \
		specifer_x.c specifer_x_alfa.c specifer_x_beta.c specifer_x_delta.c \
		specifer_p.c specifer_o.c specifer_o_alfa.c specifer_o_beta.c \
		specifer_o_delta.c specifer_f.c specifer_b.c utilities.c utilities_alfa.c \

FT_PRINTF_SOURCES = $(addprefix $(FT_PRINTF_SRC_DIR), $(FT_PRINTF_SRC))


OBJ_DIR = ./objs/
OBJECTS = $(LIBFT_SRC:.c=.o)
OBJECTS += $(FT_PRINTF_SOURCES:.c=.o)

HEADERS += $(FT_PRINTF_DIR)includes/ft_printf.h
HEADERS += ./includes/libft.h

INCLUDES = -I$(HEADERS)

COLOR_RESET = \033[0m
COLOR_DELETE = \033[0;31m
COLOR_PENDING = \033[01;33m
COLOR_SUCCESS = \033[1;32m
COLOR_DEFAULT = \033[1;34m

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJECTS)
	@echo "[$(COLOR_PENDING)Creating $@$(COLOR_RESET)]"
	@ar rc $(NAME) $(OBJECTS)
	@mv *.o $(OBJ_DIR)
	@mv $(FT_PRINTF_SRC_DIR)*.o $(OBJ_DIR)
	@ranlib $(NAME)
	@echo "\033[A\033[K\033[A"
	@echo "Libft: [$(COLOR_SUCCESS)Object files created$(COLOR_RESET)]"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "Libft: [$(COLOR_SUCCESS)$(OBJ_DIR) was created$(RESET)]"

norme:
	norminette .

run:
	@$(CC) $(FLAGS) -I . -c main.c
	@$(CC) $(FLAGS) -o run main.o libft.a

clean:
	@echo "Libft: [$(COLOR_DELETE)Object files were removed$(COLOR_RESET)]"
	@rm -rf $(OBJ_DIR)
	@echo "Libft: [$(COLOR_DELETE)Objects folder was removed$(COLOR_RESET)]"

fclean: clean
	@rm -f $(NAME)
	@echo "[$(COLOR_SUCCESS)$(NAME) is no more$(COLOR_RESET)]"

re: fclean all

.PHONY: all clean fclean re
