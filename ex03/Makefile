NAME	=	Materia

SRCS	=	AMateria.cpp			\
			Character.cpp			\
			Cure.cpp				\
			Ice.cpp					\
			ICharacter.cpp			\
			IMateriaSource.cpp		\
			main.cpp				\
			MateriaSource.cpp

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