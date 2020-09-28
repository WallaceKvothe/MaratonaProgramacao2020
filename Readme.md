# :blue_book::green_book::notebook: Roteiro p/ Imersão 


### Maratona de Programação - Fase I de 2020 - Intermediário

*****

# 28/09/2020 - 18:00 horas

*****

- Introdução:

	- Indicação de IDEs:

		- Usadas na maratona: 

			- http://maratona.sbc.org.br/ambiente20/ambiente.txt

		- Code Blocos para C, C++:

			- http://www.codeblocks.org/downloads/26

			- https://youtu.be/W2dm8J0yTBc

		- Interpretador Python:

			- https://www.python.org/downloads/release/python-365/

			- Você pode usar qualquer editor de texto para programar 

				- notepad++ https://notepad-plus-plus.org/downloads/

	- Apresentar um exemplo de prova:

		- http://maratona.ime.usp.br/primfase19/provas/competicao/maratona.pdf

	- Orientações gerais, limítes, erros, ....:

		- http://maratona.ime.usp.br/primfase19/provas/competicao/info_maratona.pdf

		- http://maratona.ime.usp.br/primfase19/provas/competicao/contest_times.pdf

	- Descrever a importância de testar localmente o código ANTES de enviar

		- Se enviar um código N vezes e este for rejeitado por algum motivo, haverá penalização.

			- Impacto direto na classificação, detalhes em:

				- http://maratona.ime.usp.br/manual19.pdf

	- Apresentar duas situações de "Time limit exceeded" (foco desta imersão)

		- Input desalinhado: Erro ao programar a entrada de dados 

			- Exemplo: input da prova com 2 números mas programa espera 3

		- Código subótimo: a estratégia produz o resultado esperado, mas o tempo é muito longo.

			- Exemplo: você usou "força bruta", mas relações matemáticas seria melhor

	- Apresentar a medição de tempo que o CodeBlocks faz ao executar um programa dentro dele (F9)

		- Explicar a limitação dessa abordagem

	- Explicar que nas IDEs de Python essa medição de tempo não é padrão 

		- Ou seja, se vc quiser medir tempo, vc tem que "programar"

			- https://docs.python.org/3/library/timeit.html

	- Apresentar como usar o arquivo uDebug.bat (para Python, C, C++)

		- No caso do Python, o mesmo deve estar no Path (considere instalar o Anaconda3)

			- https://www.datacamp.com/community/tutorials/installing-anaconda-windows

	- Mostrar como usar o uDebug.bat para medir o tempo de execução do código


*********


### Soma Natural - 1805 (https://www.urionlinejudge.com.br/judge/pt/problems/view/1805):


- C Code

	- Abordagem por Força Bruta

		- A (1805-1ForcaBruta-A.c)

			- Lembrar as limitações dos tipos de dados.

				- https://xcbiology.files.wordpress.com/2015/07/table-e1438380260928.png

			- Explicar porque esse código deu "Time limit exceeded"

		- B (1805-1ForcaBruta-B.c)

			- Comparar com o código no item anteriror

			- Explicar porque esse código foi aceito e o outro não
			
			- Explicar a dualidade Low (bits) VS. High (data struct) Optimization

	- Abordagem Matemática 

		- A (1805-2Matematica.c)

			- A abordagem é detalha nos links dentro do código

			- Comparar o tempo de execução com as duas abordagens anteriores

- Python Code

	- Abordagem por Força Bruta

		- A (1805-1ForcaBruta-A.py)

			- Comparar com o tempo da implementação em C (1805-1ForcaBruta-A.c)

			- Explicar porque python é lento (linguagem interpretada)

				- Isso quer dizer que deverá usar algum alg. com + performace

		- B (1805-1ForcaBruta-B.py)

			- Mostrar como o tempo é diferente conforme a abordagem

				- Nessa abordagem o tempo dobrou (comparar com o anteriror)

			- Em comparação com C, onde 1 abordagem de força bruta passou, aq não passou nenhuma delas.

	- Abordagem Matemática

		- A (1805-2Matematica.py)

			- A abordagem é detalha nos links dentro do código

			- Veja que essa foi a únicar abordagem aceita no URI

			- Veja como o tempo de execução alterou


*********

# 29/09/2020 - 18:00 horas

*********


### Jogo do Maior Número - 1829 (https://www.urionlinejudge.com.br/judge/pt/problems/view/1829)


- C Code

	- Abordagem por Força Bruta

		- A (1829-1ForcaBruta-A.c)

			- Não tivemos problema de "Time limit", mas ....

			- Com essa abordagem recebemos "Wrong answer (10%)"

			- Implementação simples mas devido a limitação da linguagem temos "overflow"

				- Explicar sobre a questão do "overflow" nas variáveis

				- Veja que a saída foi gerada errada para alguns casos de teste

		- B (1829-1ForcaBruta-B.c)

			- Para contornar o problema de overflow implementamos operações p/ Grandes Números usando Vetores

				- Introduziu uma complexidade grande no código

				- Contudo, agora o programa sempre gera a resposta correta

				- Por outro lado, isso introduziu outro problema "Time limit exceeded"

					- Veja o tempo de execução. O programa não passa no URI.

	- Abordagem Matemática 

		- A (1829-2Matematica.c)

			- A abordagem é detalha nos links dentro do código

			- Veja o tempo de execução, ele é bem menor.


- Python Code

	- Abordagem por Força Bruta

		- A (1829-1ForcaBruta-A.py)

			- Apresentar porque a recursão tem limitações (isso tanto em python como em C, C++)

				- Uma forma de tentar contornar é usar o comando "setrecursionlimit"

				- Contudo, isso não resolve todo e qualquer caso pois o limite ainda existe e é finito

				- Então recursão "longas" não deveriam ser aplicadas

			- Por outro lado, apresentar a vantagem do Python que implementa nativamente operações com grandes números

				- Contudo isso tem um preço, python fica mais lento (explicar)

				- Mostre o cálculo 56 ^ 156 em python

					- 56 ** 156

						- 521593550809776928142345334484209484621713286497986308535205418100879292834718967883740023349060260855903007686028203581961078929600189255192534494549706570779107533794514674900287785240362410150409732614242410414344608879047202784074651299830610226774903182673184037011456

					- Nativamente C, C++ não faz isso. Então essa é uma vantagem do Python

			- Essa implementação gera "Runtime error" por limitação da recursão

		- B (1829-1ForcaBruta-B.py)

			- Para contorna o problema relacionado à limitação da recursividade, implememtamos com estruturas de repetição

			- Veja que a implementação em Python é muito mais simples do que aquelas duas primeiras em C (Força Bruta A e B), pois nativamente python trabalha com grandes números

			- Agora esse código funciona, ou seja, ele gera a saída esperada sempre

				- Contudo, como python é "lento", recebemos um "Time limit" do URI

	- Abordagem Matemática

		- A (1829-2Matematica.py)

			- A abordagem é detalha nos links dentro do código

			- Veja que essa abordagem é muito simples

			- Explicar porque é mais rápido fazer os cálculos usando log do que usando Large Numbers

				- Como resultado, o tempo é menor e o programa é aceito. 


*********


### Dígitos Inteligentes - 2918 (https://www.urionlinejudge.com.br/judge/pt/problems/view/2918)


- C Code

	- Abordagem por Força Bruta

		- A (2918-1ForcaBruta.c)

	- Abordagem Matemática 

		- A (2918-3Matematica-DP.c)

- Python Code

	- Abordagem por Força Bruta

		- A (2918-1ForcaBruta.py)

	- Abordagem Matemática

		- A (2918-3Matematica-DP.py)


*********












