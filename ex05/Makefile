# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: theog <theog@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 15:27:47 by theog             #+#    #+#              #
#    Updated: 2025/02/05 15:57:18 by theog            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)
OBJDIR = obj
NAME = Harl

# Règles par défaut
all: $(NAME)

# Créer l'exécutable
$(NAME): $(addprefix $(OBJDIR)/, $(OBJS))
	$(CC) $(CFLAGS) $^ -o $@

# Créer le dossier obj si nécessaire
$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Supprimer les fichiers objets et l'exécutable
clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

# Recompiler entièrement
re: fclean all

.PHONY: all clean fclean re
