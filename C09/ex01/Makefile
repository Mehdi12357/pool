# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melmehdi <melmehdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/13 18:13:51 by melmehdi          #+#    #+#              #
#    Updated: 2024/07/13 18:13:54 by melmehdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_DIR = srcs
INCLUDES_DIR = includes

# List of source files
SRCS = ft_putchar.c \
       ft_swap.c \
       ft_putstr.c \
       ft_strlen.c \
       ft_strcmp.c

# List of object files
OBJS = $(SRCS:.c=.o)

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Phony targets
.PHONY: all clean fclean re

# Default target
all: $(NAME)

# Rule to compile object files
%.o: $(SRCS_DIR)/%.c
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLUDES_DIR)

# Rule to create the library
$(NAME): $(OBJS)
	@echo "Creating library $(NAME)..."
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

# Clean rule
clean:
	@echo "Cleaning up..."
	@rm -f $(OBJS)

# Full clean rule
fclean: clean
	@echo "Full cleaning up..."
	@rm -f $(NAME)

# Rule to recompile everything
re: fclean all
