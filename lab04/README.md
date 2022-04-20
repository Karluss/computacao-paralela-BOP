# COMO COMPILAR O PROGRAMA

- Para compilar o programa, foi utilizado a seguinte linha de comando:

$ gcc lab04.c -o lab04

- Gerando assim um arquivo executável.

# COMO EXECUTAR O PROGRAMA

- Para executar o programa, utilize o seguinte comando:

$ ./lab04 

# RESULTADOS ALCANÇADOS

- A saída do programa vai ser: 

Server has saved 1 in shared memory
Server is about to fork a child process...
   Processo filho encontrou na memoria compartilhada o valor 1
   Processo filho vai realizar uma operacao de soma
   1 + 2 = 3
   Processo filho vai atualizar o valor na memoria compartilhada
   Processo filho atualizou o valor na memoria compartilhada para 3
   Processo filho vai desconectar da memoria compartilhada
   Processo filho vai desalocar a memoria compartilhada
   Processo filho vai finalizar...
   Processo pai encontrou na memoria compartilhada o valor 3
   Processo pai vai realizar uma operacao de multiplicao
   3 * 4 = 12
   Processo pai vai atualizar o valor na memoria compartilhada
   Processo pai atualizou o valor na memoria compartilhada para 12
   Processo pai vai desconectar da memoria compartilhada
   Processo pai vai desalocar a memoria compartilhada
   Processo pai vai finalizar...
