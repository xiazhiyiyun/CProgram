OBJECT = main.o getop.o push-pop.o getch-ungetch.o
CFLAGS = -g -Wall

re-poland:$(OBJECT)
	$(CC) $(CFLAGS) -o $@ $^
$(OBJECT):%.o:%.c
	$(CC) -c $(CFLAGS) -o $@ $<

./PHONY: clean
clean:
	rm *.o re-poland
