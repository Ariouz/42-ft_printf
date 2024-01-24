SRCS= ftprintf.c printf_utils.c printf_printer.c \
printf_flags.c printf_pointer.c printf_decimal.c \
printf_unsigned.c printf_hex.c printf_free.c printf_global.c

OBJS= $(SRCS:.c=.o)
LIBFT= libft
LFT_OBJS= $(wildcard $(LIBFT)/*.o)
NAME= libftprintf.a
CC= gcc
FLAGS= -Wall -Werror -Wextra

$(NAME): libft.a $(OBJS)
	ar -rcs $(NAME) $(OBJS) $(LFT_OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ -I . -L. -lft

libft.a:
	make bonus -C $(LIBFT)
	cp libft/libft.a .

test:
	make bonus -C $(LIBFT)
	$(CC) (FLAGS) $(SRCS) -g -o a.out -I . -L$(LIBFT) -lft
	@./a.out

bonus:
	make $(NAME)

all:
	make $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	make clean
	rm -rf $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re test
