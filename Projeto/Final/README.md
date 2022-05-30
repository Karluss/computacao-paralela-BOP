### COMO COMPILAR O PROGRAMA

  - Para compilar o programa com threads, foi utilizado a seguinte linha de comando:

   `gcc -g -Wall -fopenmp -o taylor_reduction taylor_reduction.c`

  - Gerando assim um arquivo executável.

### COMO EXECUTAR O PROGRAMA

  - Para executar o programa, foi utilizado a seguinte linha de comando, onde o número após o nome do arquivo executável simboliza quando threads você quer criar para rodar o programa:

  `./taylor_reduction 4`
	
 - No exemplo acima, vai rodar o código utilizando 4 threads.

### RESULTADOS ALCANÇADOS
  - Após as instruções acima, deve aparecer no terminal a seguinte saída:

`Resultado: 25.9057`


