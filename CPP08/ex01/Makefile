NAME = run

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++17

SRC_DIR = source

HEADERS = -I ./includes

CFILES = $(wildcard $(SRC_DIR)/*.cpp)
						
OBJECTS = $(CFILES:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp
		$(CXX) $(CXXFLAGS) $(HEADERS) -c -o $@ $<

clean:
		rm -rf $(OBJECTS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re