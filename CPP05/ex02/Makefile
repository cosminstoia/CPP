NAME = run

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++17

SRC_DIR = source

HEADERS = -I ./includes

CFILES = 	$(SRC_DIR)/main.cpp \
			$(SRC_DIR)/Bureaucrat.cpp \
			$(SRC_DIR)/AForm.cpp \
			$(SRC_DIR)/ShrubberyCreationForm.cpp \
			$(SRC_DIR)/RobotomyRequestForm.cpp \
			$(SRC_DIR)/PresidentialPardonForm.cpp
						
OBJECTS = $(CFILES:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp
		$(CXX) $(CFLAGS) $(HEADERS) -c -o $@ $<

clean:
		rm -rf $(OBJECTS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re