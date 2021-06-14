gomoku: gomoku.o win_jud.o
	gcc gomoku.o win_jud.o -o gomoku

gomoku.o: gomoku.c
	gcc -c gomoku.c

win_jud.o: win_jud.c
	gcc -c win_jud.c

clean:
	$(RM) *.o