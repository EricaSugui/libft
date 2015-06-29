# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/28 17:33:23 by apachkof          #+#    #+#              #
#    Updated: 2015/06/29 22:04:32 by apachkof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


UNAME_S = $(shell sh -c 'uname -s 2>/dev/null')
MAKE = make
CC = gcc
#CXX = clang++
CFLAGS = -Wall -Werror -Wextra -O3
CPPFLAGS = -I./
#LDLIBS = -lft
#LDFLAGS = -Llibft/

NAME = libft.a

SRC_FILES =	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_strdup.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			\
			ft_memalloc.c \
			ft_memdel.c \
			ft_strnew.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strsplit.c \
			ft_itoa.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putendl.c \
			ft_putnbr.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			\
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstmap.c \
			\
			ft_lstpush.c \
			ft_lstpop.c \
			ft_lstshift.c \
			\
			ft_lst2new.c \
			ft_lst2delone.c \
			ft_lst2del.c \
			ft_lst2add.c \
			ft_lst2iter.c \
			ft_lst2map.c \
			ft_lst2push.c \
			ft_lst2pop.c \
			ft_lst2shift.c \
			\
			ft_isupper.c \
			ft_islower.c \
			\
			ft_strchrcnt.c \
			ft_strsplitlst.c


SRC_DIR = .

SRC = $(addprefix $(SRC_DIR)/,$(SRC_FILES))

OBJ_DIR = obj
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o, $(SRC))

STEAM = \033[1;30m
COFFEE = \033[1;31m
NC = \033[0m

ifneq ($(DEBUG),)
CFLAGS = -Wall -Werror -Wextra -pedantic -g3
ifneq ($(UNAME_S),Darwin)
CFLAGS += -fno-omit-frame-pointer -fsanitize=address -O1
endif
OBJ_DIR = debug_dir
NAME = debug_dir/libft.a
OBJ_DIR = debug_dir
NAME = libft_debug.a
endif

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

#$(NAME): $(OBJ)
#	$(CC) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $@

clean:
	$(RM) $(OBJ)
	$(RM) -R $(OBJ_DIR)

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

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

depend:
	@sed '/#\{35\} Generated #\{34\}/q' Makefile > Makefile.new
	@mv Makefile.new Makefile
	@$(foreach source, $(SRC), echo '' >> 'Makefile'; \
		gcc -MM $(source) $(CPPFLAGS) \
		| sed 's/\(^.*\.o\): \(.*\.c\)/$$(OBJ_DIR)\/\1: $$(SRC_DIR)\/\2/' >> 'Makefile'; \
		echo '\t$$(CC)' -c '$(patsubst $(SRC_DIR)/%,$$(SRC_DIR)/%, $(source))' '$$(CFLAGS) $$(CPPFLAGS) \
		-o $(patsubst $(SRC_DIR)/%.c,$$(OBJ_DIR)/%.o, $(source))' >> 'Makefile';)

################################### Generated ##################################

$(OBJ_DIR)/ft_memset.o: $(SRC_DIR)/ft_memset.c
	$(CC) -c $(SRC_DIR)/ft_memset.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_memset.o

$(OBJ_DIR)/ft_bzero.o: $(SRC_DIR)/ft_bzero.c libft.h
	$(CC) -c $(SRC_DIR)/ft_bzero.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_bzero.o

$(OBJ_DIR)/ft_memcpy.o: $(SRC_DIR)/ft_memcpy.c
	$(CC) -c $(SRC_DIR)/ft_memcpy.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_memcpy.o

$(OBJ_DIR)/ft_memccpy.o: $(SRC_DIR)/ft_memccpy.c
	$(CC) -c $(SRC_DIR)/ft_memccpy.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_memccpy.o

$(OBJ_DIR)/ft_memmove.o: $(SRC_DIR)/ft_memmove.c libft.h
	$(CC) -c $(SRC_DIR)/ft_memmove.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_memmove.o

$(OBJ_DIR)/ft_memchr.o: $(SRC_DIR)/ft_memchr.c
	$(CC) -c $(SRC_DIR)/ft_memchr.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_memchr.o

$(OBJ_DIR)/ft_memcmp.o: $(SRC_DIR)/ft_memcmp.c
	$(CC) -c $(SRC_DIR)/ft_memcmp.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_memcmp.o

$(OBJ_DIR)/ft_strlen.o: $(SRC_DIR)/ft_strlen.c
	$(CC) -c $(SRC_DIR)/ft_strlen.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strlen.o

$(OBJ_DIR)/ft_strdup.o: $(SRC_DIR)/ft_strdup.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strdup.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strdup.o

$(OBJ_DIR)/ft_strcpy.o: $(SRC_DIR)/ft_strcpy.c
	$(CC) -c $(SRC_DIR)/ft_strcpy.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strcpy.o

$(OBJ_DIR)/ft_strncpy.o: $(SRC_DIR)/ft_strncpy.c
	$(CC) -c $(SRC_DIR)/ft_strncpy.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strncpy.o

$(OBJ_DIR)/ft_strcat.o: $(SRC_DIR)/ft_strcat.c
	$(CC) -c $(SRC_DIR)/ft_strcat.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strcat.o

$(OBJ_DIR)/ft_strncat.o: $(SRC_DIR)/ft_strncat.c
	$(CC) -c $(SRC_DIR)/ft_strncat.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strncat.o

$(OBJ_DIR)/ft_strlcat.o: $(SRC_DIR)/ft_strlcat.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strlcat.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strlcat.o

$(OBJ_DIR)/ft_strchr.o: $(SRC_DIR)/ft_strchr.c
	$(CC) -c $(SRC_DIR)/ft_strchr.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strchr.o

$(OBJ_DIR)/ft_strrchr.o: $(SRC_DIR)/ft_strrchr.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strrchr.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strrchr.o

$(OBJ_DIR)/ft_strstr.o: $(SRC_DIR)/ft_strstr.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strstr.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strstr.o

$(OBJ_DIR)/ft_strnstr.o: $(SRC_DIR)/ft_strnstr.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strnstr.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strnstr.o

$(OBJ_DIR)/ft_strcmp.o: $(SRC_DIR)/ft_strcmp.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strcmp.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strcmp.o

$(OBJ_DIR)/ft_strncmp.o: $(SRC_DIR)/ft_strncmp.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strncmp.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strncmp.o

$(OBJ_DIR)/ft_atoi.o: $(SRC_DIR)/ft_atoi.c libft.h
	$(CC) -c $(SRC_DIR)/ft_atoi.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_atoi.o

$(OBJ_DIR)/ft_isalpha.o: $(SRC_DIR)/ft_isalpha.c
	$(CC) -c $(SRC_DIR)/ft_isalpha.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_isalpha.o

$(OBJ_DIR)/ft_isdigit.o: $(SRC_DIR)/ft_isdigit.c
	$(CC) -c $(SRC_DIR)/ft_isdigit.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_isdigit.o

$(OBJ_DIR)/ft_isalnum.o: $(SRC_DIR)/ft_isalnum.c
	$(CC) -c $(SRC_DIR)/ft_isalnum.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_isalnum.o

$(OBJ_DIR)/ft_isascii.o: $(SRC_DIR)/ft_isascii.c
	$(CC) -c $(SRC_DIR)/ft_isascii.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_isascii.o

$(OBJ_DIR)/ft_isprint.o: $(SRC_DIR)/ft_isprint.c
	$(CC) -c $(SRC_DIR)/ft_isprint.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_isprint.o

$(OBJ_DIR)/ft_toupper.o: $(SRC_DIR)/ft_toupper.c
	$(CC) -c $(SRC_DIR)/ft_toupper.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_toupper.o

$(OBJ_DIR)/ft_tolower.o: $(SRC_DIR)/ft_tolower.c
	$(CC) -c $(SRC_DIR)/ft_tolower.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_tolower.o

$(OBJ_DIR)/ft_memalloc.o: $(SRC_DIR)/ft_memalloc.c
	$(CC) -c $(SRC_DIR)/ft_memalloc.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_memalloc.o

$(OBJ_DIR)/ft_memdel.o: $(SRC_DIR)/ft_memdel.c
	$(CC) -c $(SRC_DIR)/ft_memdel.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_memdel.o

$(OBJ_DIR)/ft_strnew.o: $(SRC_DIR)/ft_strnew.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strnew.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strnew.o

$(OBJ_DIR)/ft_strdel.o: $(SRC_DIR)/ft_strdel.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strdel.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strdel.o

$(OBJ_DIR)/ft_strclr.o: $(SRC_DIR)/ft_strclr.c
	$(CC) -c $(SRC_DIR)/ft_strclr.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strclr.o

$(OBJ_DIR)/ft_striter.o: $(SRC_DIR)/ft_striter.c
	$(CC) -c $(SRC_DIR)/ft_striter.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_striter.o

$(OBJ_DIR)/ft_striteri.o: $(SRC_DIR)/ft_striteri.c
	$(CC) -c $(SRC_DIR)/ft_striteri.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_striteri.o

$(OBJ_DIR)/ft_strmap.o: $(SRC_DIR)/ft_strmap.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strmap.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strmap.o

$(OBJ_DIR)/ft_strmapi.o: $(SRC_DIR)/ft_strmapi.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strmapi.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strmapi.o

$(OBJ_DIR)/ft_strequ.o: $(SRC_DIR)/ft_strequ.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strequ.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strequ.o

$(OBJ_DIR)/ft_strnequ.o: $(SRC_DIR)/ft_strnequ.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strnequ.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strnequ.o

$(OBJ_DIR)/ft_strsub.o: $(SRC_DIR)/ft_strsub.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strsub.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strsub.o

$(OBJ_DIR)/ft_strjoin.o: $(SRC_DIR)/ft_strjoin.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strjoin.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strjoin.o

$(OBJ_DIR)/ft_strtrim.o: $(SRC_DIR)/ft_strtrim.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strtrim.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strtrim.o

$(OBJ_DIR)/ft_strsplit.o: $(SRC_DIR)/ft_strsplit.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strsplit.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strsplit.o

$(OBJ_DIR)/ft_itoa.o: $(SRC_DIR)/ft_itoa.c
	$(CC) -c $(SRC_DIR)/ft_itoa.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_itoa.o

$(OBJ_DIR)/ft_putchar.o: $(SRC_DIR)/ft_putchar.c libft.h
	$(CC) -c $(SRC_DIR)/ft_putchar.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_putchar.o

$(OBJ_DIR)/ft_putstr.o: $(SRC_DIR)/ft_putstr.c libft.h
	$(CC) -c $(SRC_DIR)/ft_putstr.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_putstr.o

$(OBJ_DIR)/ft_putendl.o: $(SRC_DIR)/ft_putendl.c libft.h
	$(CC) -c $(SRC_DIR)/ft_putendl.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_putendl.o

$(OBJ_DIR)/ft_putnbr.o: $(SRC_DIR)/ft_putnbr.c libft.h
	$(CC) -c $(SRC_DIR)/ft_putnbr.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_putnbr.o

$(OBJ_DIR)/ft_putchar_fd.o: $(SRC_DIR)/ft_putchar_fd.c libft.h
	$(CC) -c $(SRC_DIR)/ft_putchar_fd.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_putchar_fd.o

$(OBJ_DIR)/ft_putstr_fd.o: $(SRC_DIR)/ft_putstr_fd.c libft.h
	$(CC) -c $(SRC_DIR)/ft_putstr_fd.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_putstr_fd.o

$(OBJ_DIR)/ft_putendl_fd.o: $(SRC_DIR)/ft_putendl_fd.c libft.h
	$(CC) -c $(SRC_DIR)/ft_putendl_fd.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_putendl_fd.o

$(OBJ_DIR)/ft_putnbr_fd.o: $(SRC_DIR)/ft_putnbr_fd.c
	$(CC) -c $(SRC_DIR)/ft_putnbr_fd.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_putnbr_fd.o

$(OBJ_DIR)/ft_lstnew.o: $(SRC_DIR)/ft_lstnew.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lstnew.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lstnew.o

$(OBJ_DIR)/ft_lstdelone.o: $(SRC_DIR)/ft_lstdelone.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lstdelone.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lstdelone.o

$(OBJ_DIR)/ft_lstdel.o: $(SRC_DIR)/ft_lstdel.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lstdel.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lstdel.o

$(OBJ_DIR)/ft_lstadd.o: $(SRC_DIR)/ft_lstadd.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lstadd.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lstadd.o

$(OBJ_DIR)/ft_lstiter.o: $(SRC_DIR)/ft_lstiter.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lstiter.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lstiter.o

$(OBJ_DIR)/ft_lstmap.o: $(SRC_DIR)/ft_lstmap.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lstmap.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lstmap.o

$(OBJ_DIR)/ft_lstpush.o: $(SRC_DIR)/ft_lstpush.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lstpush.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lstpush.o

$(OBJ_DIR)/ft_lstpop.o: $(SRC_DIR)/ft_lstpop.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lstpop.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lstpop.o

$(OBJ_DIR)/ft_lstshift.o: $(SRC_DIR)/ft_lstshift.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lstshift.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lstshift.o

$(OBJ_DIR)/ft_lst2new.o: $(SRC_DIR)/ft_lst2new.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lst2new.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lst2new.o

$(OBJ_DIR)/ft_lst2delone.o: $(SRC_DIR)/ft_lst2delone.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lst2delone.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lst2delone.o

$(OBJ_DIR)/ft_lst2del.o: $(SRC_DIR)/ft_lst2del.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lst2del.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lst2del.o

$(OBJ_DIR)/ft_lst2add.o: $(SRC_DIR)/ft_lst2add.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lst2add.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lst2add.o

$(OBJ_DIR)/ft_lst2iter.o: $(SRC_DIR)/ft_lst2iter.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lst2iter.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lst2iter.o

$(OBJ_DIR)/ft_lst2map.o: $(SRC_DIR)/ft_lst2map.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lst2map.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lst2map.o

$(OBJ_DIR)/ft_lst2push.o: $(SRC_DIR)/ft_lst2push.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lst2push.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lst2push.o

$(OBJ_DIR)/ft_lst2pop.o: $(SRC_DIR)/ft_lst2pop.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lst2pop.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lst2pop.o

$(OBJ_DIR)/ft_lst2shift.o: $(SRC_DIR)/ft_lst2shift.c libft.h
	$(CC) -c $(SRC_DIR)/ft_lst2shift.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_lst2shift.o

$(OBJ_DIR)/ft_isupper.o: $(SRC_DIR)/ft_isupper.c libft.h
	$(CC) -c $(SRC_DIR)/ft_isupper.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_isupper.o

$(OBJ_DIR)/ft_islower.o: $(SRC_DIR)/ft_islower.c libft.h
	$(CC) -c $(SRC_DIR)/ft_islower.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_islower.o

$(OBJ_DIR)/ft_strchrcnt.o: $(SRC_DIR)/ft_strchrcnt.c
	$(CC) -c $(SRC_DIR)/ft_strchrcnt.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strchrcnt.o

$(OBJ_DIR)/ft_strsplitlst.o: $(SRC_DIR)/ft_strsplitlst.c libft.h
	$(CC) -c $(SRC_DIR)/ft_strsplitlst.c $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/ft_strsplitlst.o
