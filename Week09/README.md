# Седмица 9 - Дървета с произволен брой наследници

Задача 1:
=
Построете дърво с много наследници от подаден стриг. В стринга корените са огредени с [], а наследниците с ().
```
Вход: "[1([2][3([5][6])][4([7])])]"
Изход: 
                     1
                 /   |   \
                2    3    4
                    / \   |
                   5   6  7
                   
```
[Решение...](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/blob/main/Week09/Task1)

Задача 2:
=
Намерете:
- сумата от върховете на дърво с много наследници.
- дали даден елемент се съдържа в дърво с много наследници.
```
Вход:
                     1
                 /   |   \
                2    3    4
                    / \   |
                   5   6  7
Изход:
sum = 28
have element 6
```
[Решение...](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/blob/main/Week09/Task2)

Задача 3:
=
Изведете стойностите на дърво с много наследници по:
- дълбочина
- ширина
```
Вход:
                     1
                 /   |   \
                2    3    4
                    / \   |
                   5   6  7
Изход:
1 2 3 5 6 4 7
1 2 3 4 5 6 7
```
[Решение...](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/blob/main/Week09/Task3)
