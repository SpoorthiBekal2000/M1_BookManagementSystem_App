#Target_name : Dependencies
#<TAB>Command
PROJ_NAME  = bookmanagement
SRC = bookmanagement.c newbook.c displaybook.c searchbook.c deletebook.c
INC = bookmanagement.h

Build : $(SRC) $(INC)
	gcc $(SRC) -o$(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run:Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean:
	rm all.out