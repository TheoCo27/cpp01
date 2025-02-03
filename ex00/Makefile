# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: theog <theog@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 18:13:56 by theog             #+#    #+#              #
#    Updated: 2025/02/03 18:14:09 by theog            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

# Fichiers sources
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

# Dossier pour les fichiers objets
OBJDIR = obj
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

# Compilateur et flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Règle par défaut
all: $(NAME)

# Lien final
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Compilation des .cpp en .o dans le dossier obj
$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Création du dossier obj s'il n'existe pas
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Nettoyage des fichiers objets
clean:
	rm -rf $(OBJDIR)

# Nettoyage complet (objets + binaire)
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re
