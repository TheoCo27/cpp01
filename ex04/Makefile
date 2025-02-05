# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: theog <theog@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 13:49:48 by theog             #+#    #+#              #
#    Updated: 2025/02/05 14:41:35 by theog            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom du compilateur
CXX = c++

# Options de compilation
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers source et objets
SRC = main.cpp utils.cpp
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

# Nom de l'exécutable
NAME = replacer

# Règle principale
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Création du dossier obj si nécessaire
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Compilation des fichiers objets
$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -rf $(OBJ_DIR)

# Nettoyage complet
fclean: clean
	rm -f $(NAME)

# Reconstruire tout
re: fclean all

.PHONY: all clean fclean re
