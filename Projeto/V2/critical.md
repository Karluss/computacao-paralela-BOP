# Controle de acesso à região critica para a variável global compartilhada

A variável  compartilhada usada é a **global_result_p**.

Quando há possibilidade de resultados indeterminados ocorrer na execução de duas ou mais threads
concorentemente, somente uma thread pode executar o bloco estruturado por vez. Por isso foi utilizado o **#pragma omp critical** para evitar a condição de corrida. Logo, se uma thread está em seção crítica, nenhuma thread adicional poderá estar no mesmo processo.

para realizarmos as somas necessários dentro da função taylor,, usamos a variável **sum** e colocamos a variável compartilhada para receber esse valor acumulado:

   *# pragma omp critical*
   
  *global_result_p += sum;*
