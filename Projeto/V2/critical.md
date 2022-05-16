# Critical - Variável compartilhada.

Para que pudessemos executar mais de uma thread por vez, foi necessário utilizar:

  *# pragma omp critical*
   
  *global_result_p += sum;*
  
Se tivermos duas ou mais threads sendo utilizadas, somente uma das threads será aceita pelo bloco estruturado. Assim, com o critical, quando tivermos uma thread acessando o bloco estruturado para armazenar o cálculo feito, nenhuma outra thread pode acessar a região crítica.

Para realizar as somas necessárias dentro do código, usamos a variável **sum** e colocamos esse valor acumulado dentro da variável compartilhada.   
