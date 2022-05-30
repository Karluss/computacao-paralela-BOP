### CÁLCULO DO SPEEDUP

  - Para calcular o Speedup, descobrimos o tempo de execução da versão serial primeiramente. Para isso, rodamos o executável do "taylor_reduction" com apenas 1 thread:
  ![enter image description here](https://github.com/Karluss/computacao-paralela-BOP/blob/master/images/Captura%20de%20tela%20de%202022-05-29%2013-24-59.png?raw=true)
   - Baseado na execução acima, vamos usar o **tempo da versão serial** como **779,394 segundos.**

 - Agora, executamos a versão utilizando Reduction com diferentes número de threads e usamos o tempo de execução de cada um para conseguir os seguintes Speedups:

|Nº de Threads|Tempo de execução(em segundos)|Speedup|
|--|--|--|
| 2 |400,565 |1,9457 |
| 3 |267,871 |2,9096 |
| 4 |206,594 |3,7726 |
| 5 |206,801 |3,7688 |

 - Print das execuções: 
 ![enter image description here](https://github.com/Karluss/computacao-paralela-BOP/blob/master/images/Captura%20de%20tela%20de%202022-05-29%2013-10-52.png?raw=true)


### POR QUE ESCOLHEMOS ESSA VERSÃO?

- **Ao comparar com a versão anterior**, observamos que o código tinha um problema ao tentar executar com T = 10^10  (causava overflow e não conseguíamos resultado), o que significa que usando o "omp critical" só podíamos calcular, no máximo, com T = 10^9. Só que ao usar a diretiva "parallel for" conseguimos superar esse limite e estamos calculando com T = 10^11.
- **Speedup da V2 com T = 10^9 (4 threads):** 3,7092
- **Speedup da Versão Final com T = 10^9 (4 threads):** 3,277
- Como pode ser observado, o Speedup da V2 é melhor, mas optamos por usar a versão com a diretiva com "parallel for" por conseguir calcular um valor maior de T, mesmo que execute o código um pouco mais devagar, mas mesmo assim é pouca coisa então é possível relevar.

- Print da execução com T = 10^9 (com 1 e 4 threads):
![enter image description here](https://github.com/Karluss/computacao-paralela-BOP/blob/master/images/Captura%20de%20tela%20de%202022-05-29%2018-35-08.png?raw=true)
