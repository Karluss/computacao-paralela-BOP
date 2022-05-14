### COMO COMPILAR O PROGRAMA

  - Para compilar o programa com threads, foi utilizado a seguinte linha de comando:

   `gcc -g -Wall -o taylor_pthread taylor_pthread.c -lpthread`

  - Gerando assim um arquivo executável.

### COMO EXECUTAR O PROGRAMA

  - Para executar o programa, foi utilizado a seguinte linha de comando, onde o número após o nome do arquivo executável simboliza quando threads você quer criar para rodar o programa:

  `./taylor_pthread 4`
	
 - No exemplo acima, vai rodar o código utilizando 4 threads.

### RESULTADOS ALCANÇADOS
  - Após as instruções acima, deve aparecer no terminal a seguinte saída:

  `Resultado: 3.82 da thread 0`
  
  `Resultado: 4.50 da thread 1`
  
  `Resultado: 5.19 da thread 3`
  
  `Resultado: 4.90 da thread 2`
  
  `Tempo de execucao com 4 threads: 0.933000`

### CÁLCULO DO SPEEDUP

  - Para calcular o Speedup, descobrimos o tempo de execucação da versão serial primeiramente.
  - A cada vez que rodava o código, havia um tempo de execução diferente, então rodamos 5 vezes e fizemos a média desse tempo:
  ![](https://github.com/Karluss/computacao-paralela-BOP/blob/master/images/Captura%20de%20tela%20de%202022-05-08%2018-45-14.png?raw=true)
  - **Com isso, conseguimos uma média do tempo serial de 0,2224 segundos.**
  - Para o tempo de execução utilizando pthreads, utilizamos a mesma lógica:
 ![](https://github.com/Karluss/computacao-paralela-BOP/blob/master/images/Captura%20de%20tela%20de%202022-05-08%2019-00-51.png?raw=true)
   - **O resultado da versão em paralelo obtido foi de 0,9438 segundos.**
   - Sendo assim, calculando Tempo Serial dividido por Tempo Paralelo, obtemos:
   - 0,2224/0,9438 = 0,2356
   - **Speedup = 0,2356.**
  


