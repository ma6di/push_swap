# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/09 15:40:49 by mcheragh          #+#    #+#              #
#    Updated: 2024/08/09 18:52:14 by mcheragh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -g
LIBFT_DIR   = ./libft
LIBFT       = $(LIBFT_DIR)/libft.a
SRC_DIR     = src/
OBJ_DIR     = obj/
INCLUDE     = -I include -I $(LIBFT_DIR)/include
RM          = rm -f

# Source and object files
SRC_FILES   = push_swap oprations1 oprations2 oprations3 check_arg sorting1 sorting2 utls1 utls2 apply_op_combo creat_stack_a stack_rotate cases1 cases2
OBJ         = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

# Build target
all: $(NAME)

# Link the final executable
$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)
	@echo "Executable $(NAME) created!"

# Compile each .c file into an .o file in the obj/ directory
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# Build libft if it doesn't exist
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

# Clean object files
clean:
	@$(RM) -rf $(OBJ_DIR)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "Object files removed."

# Clean all build artifacts, including the executable and libft.a
fclean: clean
	@$(RM) -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "Executable $(NAME) and libft.a removed."

# Rebuild everything from scratch
re: fclean all

# Declare phony targets (not actual files)
.PHONY: all clean fclean re
