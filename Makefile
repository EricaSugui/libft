# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/28 17:33:23 by apachkof          #+#    #+#              #
#    Updated: 2015/04/28 17:58:43 by apachkof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKE = make
CC = gcc
CFLAGS = -Wall -Werror -Wextra -O3
CPPFLAGS = -Iincludes/

NAME = libft.a

BIN_DIR = .

SRC_FILES =	

SRC_DIR = .

SRC = $(addprefix $(SRC_DIR)/,$(SRC_FILES))

OBJ_DIR = obj
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

STEAM = \033[1;30m
COFFEE = \033[1;31m
NC = \033[0m

$(NAME): $(BIN_DIR) $(OBJ_DIR) $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SUFFIXES:

coffee:
	@echo "        $(STEAM)..\"$(NC)"
	@echo "      $(STEAM)..$(NC)  $(STEAM)..\"$(NC)"
	@echo "            $(STEAM)..\"$(NC)"
	@echo "             $(STEAM)..\"$(NC)"
	@echo "            $(STEAM)..\"$(NC)"
	@echo "           $(STEAM)..\"$(NC)"
	@echo "         $(STEAM)..\"$(NC)"
	@echo "##      $(STEAM)..$(NC)     ####"
	@echo "##$(COFFEE).............$(NC)##  ##"
	@echo "##$(COFFEE).............$(NC)##   ##"
	@echo "##$(COFFEE).............$(NC)## ##"
	@echo "##$(COFFEE).............$(NC)###"
	@echo " ##$(COFFEE)...........$(NC)##"
	@echo "¸ ############# ˛"
	@echo "#################"

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

depend:
	@sed '/#\{35\} Generated #\{34\}/q' Makefile > Makefile.new
	@mv Makefile.new Makefile
	@$(foreach source, $(SRC), echo '' >> 'Makefile'; \
		gcc -MM $(source) $(CPPFLAGS) \
		| sed 's/\(^.*\.o\):/$(OBJ_DIR)\/\1:/' >> 'Makefile'; \
		echo '\t$$(CC)' -c $(source) '$$(CFLAGS) $$(CPPFLAGS) \
		-o $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(source))' >> 'Makefile';)

################################### Generated ##################################
