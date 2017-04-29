CFLAGS = -Wall -g
VERSION=v1-0
MENU=$(wildcard menu/*.c)
MENU_OBJECTS=$(MENU:.c=.o)
MENU_HEADERS=$(wildcard menu/*.h)
SRC=$(wildcard src/*.c)
SRC_OBJECTS=$(SRC:.c=.o)
SRC_HEADERS=$(wildcard src/*.h)
TEST_SRC=$(wildcard testes/*.c)
TEST_HEADERS=$(wildcard testes/*.h)


main-$(VERSION): $(SRC_HEADERS) $(MENU_HEADERS) $(MENU_OBJECTS) $(SRC_OBJECTS)
	gcc -o $@ $^ $(CFLAGS)

%.o: %.c $(SRC_HEADERS) $(MENU_HEADERS)
	gcc -o $@ -c $< $(CFLAGS)

test: $(TEST_HEADERS) $(TEST_SRC)
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm -f *.exe
	rm -f */*.o