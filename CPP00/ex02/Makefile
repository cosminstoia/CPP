NAME = run

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++17

CFILES = 	Account.cpp \
			tests.cpp \
						
OBJECTS = $(CFILES:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp
		$(CXX) $(CFLAGS) -c -o $@ $<

clean:
		rm -rf $(OBJECTS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re