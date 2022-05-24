### COMO COMPILAR O PROGRAMA

  - Para compilar o programa com threads, foi utilizado a seguinte linha de comando:

   `gcc -g -Wall -fopenmp -o taylor_openmp taylor_openmp.c`

  - Gerando assim um arquivo executável.

### COMO EXECUTAR O PROGRAMA

  - Para executar o programa, foi utilizado a seguinte linha de comando, onde o número após o nome do arquivo executável simboliza quando threads você quer criar para rodar o programa:

  `./taylor_openmp 5`
	
 - No exemplo acima, vai rodar o código utilizando 5 threads.

### RESULTADOS ALCANÇADOS
  - Após as instruções acima, deve aparecer no terminal a seguinte saída:

`Thread 0 => Resultado: 19.6910` 

`Thread 2 => Resultado: 0.4055`

`Thread 1 => Resultado: 0.6931`

`Thread 3 => Resultado: 0.2877`

`Thread 4 => Resultado: 0.2231`

`Resultado: 21.3005`


### CÁLCULO DO SPEEDUP

  - Para calcular o Speedup, descobrimos o tempo de execução da versão serial primeiramente:
  ![enter image description here](https://github.com/Karluss/computacao-paralela-BOP/blob/master/images/Captura%20de%20tela%20de%202022-05-15%2019-18-30.png?raw=true)
   - Baseado na execução acima, vamos usar o **tempo da versão serial** como **3,457 segundos.**

 - Agora, executamos a versão utilizando OpenMP com diferentes número de threads e usamos o tempo de execução de cada um para conseguir os seguintes Speedups:

|Nº de Threads|Tempo de execução(em segundos)|Speedup|
|--|--|--|
| 2 |1,783 |1,9388 |
| 3 |1,196 |2,8904 |
| 4 |0,932 |3,7092 |
| 5 |1,046 |3,3049 |

 - Print das execuções: 
 ![enter image description here](https://github.com/Karluss/computacao-paralela-BOP/blob/master/images/Captura%20de%20tela%20de%202022-05-15%2019-29-54.png?raw=true)
