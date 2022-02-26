#Target_name : Dependencies
#<TAB>Command
SRC = bookmanagement.c newbook.c displaybook.c searchbook.c deletebook.c
INC = bookmanagement.h

all.out : $(SRC) $(INC)
	gcc $^ -o $@

run: target
	./all.out

clean:
	rm all.out