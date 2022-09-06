app: main.c fifo.c
	gcc $^ -I./ -o $@

.PHONY:clean


clean:
	rm -rf *~
	rm -rf app
