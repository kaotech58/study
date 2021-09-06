SRCS				= ft_putchar.c \
				  ft_putchar_fd.c \
				  ft_putnbr.c	\
				  ft_putnbr_fd.c

OBJS_DIR			= objs/
OBJS				= $(SRCS:.c=.o)
OBJECTS_PREFIXED		= $(addprefix $(OBJS_DIR), $(OBJS))
DEPS				= libft.h

NAME				= libft.a

CC				= gcc
RMDIR				= rm -rf
RM				= rm -f
CCFLAGS				= -Wall -Wextra -Werror -I.

$(OBJS_DIR)%.o : %.c $(DEPS)
				@mkdir -p $(OBJS_DIR)
				@echo $(GRN)"Compiling: $<"$(EOC)
				@gcc $(CC_FLAGS) -c $< -o $@

all:				$(NAME)

$(NAME):			$(OBJECTS_PREFIXED)
					ar rcs $(NAME) $(OBJECTS_PREFIXED)
					@echo $(GRN)"*** Libft has compiled successfully ***"$(EOC)

clean:
				$(RMDIR) $(OBJS_DIR)
					@echo $(RED)"*** All Object files have been deleted ***"$(EOC)

fclean:				clean
				$(RM) $(NAME)
					@echo $(RED)"*** Libft has been deleted ***"$(EOC)

re:				fclean all

.PHONY:				all clean fclean re

GRN				 = "\e[92m"
RED				 = "\e[31m"
EOC				 = "\e[0m"
