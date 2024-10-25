flags	=	-Wall	-Werror	-Wextra	-std=c99
f = -fsanitize=address
unity = /Users/aazzaoui/Unity-master/src/unity.c
mainFileName = Tests/Test_All_Func.c
mainFileName2 = Tests/Test_without_sanitize.c

# SRC = ft_memmove.c ft_memcpy.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c
SRC = $(wildcard *.c)

OBJS:= $(SRC:%.c=%.o)

open:	compile1 compile2 clean
	@./a.out 
	@./b.out

compile1:	unity	$(OBJS)
	@gcc	$(flags)	$(f)	-I. $(OBJS)	unity.o	$(mainFileName)

compile2:	unity	$(OBJS)
	@gcc	$(flags)	-I. $(OBJS)	unity.o	$(mainFileName2) -o b.out

%.o:	%.c
	@gcc	-I.	$(FLAGS)	-o	$@	-c	$<

unity:
	@gcc 	-c	$(unity)	-o unity.o

clean:
	@rm	-fr	*.o

delExeFile:
	@rm -fr a.out