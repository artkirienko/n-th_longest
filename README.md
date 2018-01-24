## Постановка задачи

Implement the function `longest(array,n)` where you will be given an array of
strings and then return the nth longest string in that array. e.g.
`arr = ['Hello','World','Codewars','Katas'] n = 3;`
should return 'World' because 'Codewars' length = 8 , 'Hello' length = 5, so
that is the 2nd longest word and then 'World' (although also word length of 5,
'World' is after 'Hello' in the array). When words have the same lengths, treat
them in the order in which they exist in the array. Array will never be empty
and n > 0 always.

## Требования

        Docker

или

        g++ (or any other C++11 compiler), iostream, string, vector, queue, utility

## Запуск (через Docker)

1. Собрать образ:

        $ docker build -t n-th_longest .

2. Запустить:

        $ docker run n-th_longest


## Запуск (без Docker)

1. Скомпилировать:

        $ g++ -std=c++11 main.cpp -o n-th_longest

2. Запустить:

        $ ./n-th_longest

## Результат работы

Результат работы содержит информацию о начальных значениях и окончательный
ответ.
