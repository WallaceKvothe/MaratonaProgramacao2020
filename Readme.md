# :blue_book::green_book::notebook: Roteiro p/ Imersão 


### Maratona de Programação - Fase I de 2020 - Intermediário

## 28/09/2020 - 18:00 horas

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

	- Abordagem Matematíca 

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

	- Abordagem Matematíca

		- A (1805-2Matematica.py)

			- A abordagem é detalha nos links dentro do código

			- Veja que essa foi a únicar abordagem aceita no URI

			- Veja como o tempo de execução alterou


*********












