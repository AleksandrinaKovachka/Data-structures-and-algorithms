# Хеш-таблици

Теория:
=
- **map** - асоциативни контейнери, които съхраняват елементи, образувани от комбинация ключ и стойност, следвайки определен ред. Ключ стойности се използват за сортиране и уникално идентифициране на елементите, докато стойности съхраняват съдържанието, свързано с този ключ. 

  -> винаги се сортират по ключа
  
  -> имплементирани са като двоични наредени дървета
  
- **hashmap** - асоциативни контейнери, които съхраняват елементи, образувани от комбинация ключ и стойност. Стойността на ключа се използва за еднозначно идентифициране на елемента, а съответната стойност е съдържанието, свързано с ключа. Както ключът, така и стойността могат да бъдат от всякакъв тип предварително дефинирани или дефинирани от потребителя. 

  -> ключът се хешира в индекси на хеш таблица, поради което изпълнението на структурата на данните зависи много от хеш функцията
  
  -> търсене, вмъкване, изтриване и актуализация на ключ се изпълняват за констатно време
  
- **правила:**

  -> ако хеш стойностите са различни, то и двата обекта са различни
  
  -> ако обектите са еднакви, то и хеш стойностите са еднакви
  
  -> ако хеш стойностите са еднакви не следва, че двата обекта са еднакви
  
- **хеш-финкции**
- **колизия**

Структури от данни:
=

| |достъп|търсене|вмъкване|изтриване|
| :---: | :---: | :---: | :---: | :---: |
|масив| O(1) | O(n) | O(n) | O(n) (O(1) в началото и края) |
|стек| O(n) | O(n) | O(1) | O(1) |
|опашка| O(n) | O(n) | O(1) | O(1) |
|едносвързан списък| O(n) | O(n) | O(1) | O(1) - ако има указател към последния елемент |
|двусвързан списък| O(n) | O(n) | O(1) | O(1) - ако има указател към последния елемент|
|двоично наредено дърво| O(logn) | O(logn) | O(logn) | O(logn)
|хеш-таблица| - | O(1) | O(1) | O(1) |
