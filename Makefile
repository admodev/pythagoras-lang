all: compile

config:
	./config

compile: config
	./make

run:
	bin/pythagoras

test:
	echo "testing"

