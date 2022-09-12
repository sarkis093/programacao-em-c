CC=gcc
CFLAGS=-Wall

# 		MACROS ESPECIAIS	
# 				
# $@: Nome completo do alvo atual
#
# $?: Lista de arquivos desatualizados para dependencia atual
#
# $<: Arquivo fonte da unica dependencia atual
#

hello:
	$(CC) $(CFLAGS) hello-ex.c hello-ex2.c -o hello

clean:
	rm -vf hello-ex2*.o
