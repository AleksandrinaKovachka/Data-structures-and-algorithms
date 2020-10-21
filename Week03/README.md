# Седмица 3 - Алгоритми за сортиране

Теория

Бонус задачи
=

Задача 1:
=
Напишете клас Table с име на таблица, пореден номер и тип(enum) на данните в нея. Поредният номер трябва да зависи от броя на създадените таблици от започването на програмата. Данните могат да бъдат числови или символни. Създайте едносвърдан списък с обекти от класа Table.
Напишете следните функции:
- функция, която проверява дали имената на таблиците са идентични (дали няма повтарящи се имена). Ако има повтарящи се имена, добавете произволна буква(rand()) към името
- функция, която сортира първо по типа на данните в таблицата и след това по поредния номер

Задача 2:
=
Напишете програма, която въвежда число n и след това толкова на брой числа. Запишете ги в двусвързан списък. Сортирайте списъка и след това го променете така, че всички повтарящи се елементи да бъдат заменени с два елемента - първият да показва броя на еднаквите елементи, следван от самия елемент.

```
Пример:
12
7 7 3 3 3 3 4 4 9 9 9 2

Решение:
1 -> 2 -> 4 -> 3 -> 2 -> 4 -> 2 -> 7 -> 3 -> 9

```