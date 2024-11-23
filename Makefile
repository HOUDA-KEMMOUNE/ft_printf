NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJ = $(SRC:.o=.c)
EXE = a.out

all: $(NAME)
$(NAME): $(OBJ)
	@ar rcs $@ $(OBJ)

%.o: %.c
	@$(CC) -c $(CFLAGS) $< -o $@

$(EXE): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(EXE)
