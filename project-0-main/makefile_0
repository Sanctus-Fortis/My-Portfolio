# makefile for project 0 pass off cases
NUM:=0
numbers:=0 1 2 3 4 5
tests:=Lab$(NUM)PassOffCases

.SILENT: all

all:
	for number in $(numbers) ; \
	do \
	    echo ""Running input $$number"" ; \
	    ./lab$(NUM) $(tests)/input$$number.txt > $(tests)/out.txt ; \
	    diff $(tests)/answer$$number.txt $(tests)/out.txt || (echo ""diff failed on test $$number"") ; \
	done ; \
    rm $(tests)/out.txt ; \

compile:
	g++ -Wall -Werror -std=c++17 -g *.cpp -o lab$(NUM)
