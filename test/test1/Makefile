CFLAGS = -Wall -Werror -Wextra -g -std=c11
GCOV = -fprofile-arcs -ftest-coverage -fPIC
OS = $(shell uname)

ifeq (${OS}, Linux)
	TEST_FLAGS = -lcheck -pthread -lrt -lm -L. -lwhile_test
else
	TEST_FLAGS = -lcheck
endif

all: while_test.a

gcov_report: while_test
	gcov -i *.gcda
	gcovr --html-details -o report.html

ifeq (${OS}, Linux)
	firefox report.html
else
	open report.html
endif

while_test: while_test.a
	gcc while_test.c -c
	gcc ${CFLAGS} ${TEST_FLAGS} ${GCOV} strlen_test.c while_test.o -o while_test
	./while_test

while_test.a:	while_test.o
	ar rc libswhile_test.a while_test.o
	ranlib libswhile_test.a
	cp libswhile_test.a lwhile_test.a
	cp libswhile_test.a while_test.a

while_test.o:	while_test.c
	gcc ${CFLAGS} -c while_test.c

rebuild: clean while_test

clean:
	rm -rf *.o *.out *.a *.gcno *.gcda *.html *.gz *.css while_test
