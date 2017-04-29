CFLAGS = -Wall -g
VERSION=v1-0
MENU=$(wildcard menu/*.c)
MENU_OBJECTS=$(MENU:.c=.o)
MENU_HEADERS=$(wildcard menu/*.h)
SRC=$(wildcard src/*.c)
SRC_HEADERS=$(wildcard src/*.h)
TEST_SRC=$(wildcard testes/*.c)
TEST_HEADERS=$(wildcard testes/*.h)


main-$(VERSION): $(SRC) $(MENU_OBJECTS)
	gcc -o $@ $^ $(CFLAGS)

%.o: %.c $(MENU_HEADERS)
	gcc -o $@ -c $< $(CFLAGS)

test: $(TEST_HEADERS) $(TEST_SRC)
	gcc -o $@ $^ $(CFLAGS)
clean:
	rm *.exe
	rm */*.o