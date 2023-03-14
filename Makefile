all:test function

test: acceptance_test.c
	g++ -o test acceptance_test.c

function: function1.c
	g++ -pthread -o func function1.c
