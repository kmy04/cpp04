NAME	=	Animal

SRCS	=	Animal.cpp		\
			Cat.cpp			\
			Dog.cpp			\
			main.cpp		\
			WrongAnimal.cpp	\
			WrongCat.cpp	\

OBJS	=	$(SRCS:.cpp=.o)

CXX		=	c++
CXXFLAG	=	-Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o : %.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS) $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re