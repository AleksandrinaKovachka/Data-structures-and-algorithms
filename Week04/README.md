# Седмица 4 - Стек, работа с файлове

[Имплементация на стек с масив](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/blob/main/Week04/StackArray.h)

[Имплементация на стек със списък](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/blob/main/Week04/StackList.h)

[Кратка теория за файлове](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/tree/main/Week04/Theory-file)

[Пример за работа с текстови и бинарни файлове](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/blob/main/Week04/Example-file)

Задача 1:
=
Напишете функция, която проверява дали даден низ е правилно скобуван. В низа може да има скоби като: {}, [], ().

```
Пример: { [ ( ( ) [ ] ) ] }

Изход: Правилно

Пример: { [ ( ( () [ ] ) ] }

Изход: Грешно
```
[Решение...](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/blob/main/Week04/Task1)

Задача 2:
=
Напишете програма, която приема израз от файл, изчислява неговата стойност и записва само новополучената стойност в същия файл.

**Отделяйте приоритетите на оценяване с ().**

```
Пример: (7 + (2 * (3 + 4)))

Изход: 21
```
Задача 3:
=
Напишете програма, която приема компресиран низ от файл. Трябва да проверите дали низът е коректно зададен и след това да го декомпресирате като при срещане на число, трябва да напишете толкова пъти низа в скобите след числото, колкото е самото число. При новия запис премахнете числото и скобите и на тяхно място поставете вече новополучената част. Декомпресираният низ добавете след компресирания във файла като ги разделите с “-”.

```
Пример: A2(BC)12(D)

Изход: ABCBCDDDDDDDDDDDD

Пример: A2(BC)12D

Изход: Некоректен – няма скоби след числото

Пример: A10(BC)2(D)

Изход: ABCBCBCBCBCBCBCBCBCBCDD

Пример: A2(BC6(D))

Изход: ABCDDDDDDBCDDDDDD
```

