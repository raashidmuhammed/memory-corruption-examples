app: main.c fifo.c
	gcc -fsanitize=address $^ -I./ -o $@

.PHONY:clean


clean:
	rm -rf *~
	rm -rf app
