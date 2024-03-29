CC = gcc
NAME = ata_printf
EXTRA_ATA_FUNCTIONS = ata_functions

SRC =	main.c \
		ata_printf.c \
		${EXTRA_ATA_FUNCTIONS}/ata_putnbr.c

OBJ_FILES = ${SRC:%.c=%.o}

all: ${NAME}

${NAME}: $(OBJ_FILES)
	${CC} ${OBJ_FILES} -o ${NAME}

%.o: %.c
	${CC} -c $< -o $@

clean:
	rm -f ${OBJ_FILES}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re