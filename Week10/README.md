# Седмица 10 - Двоични дървета, Двоични наредени дървета, Дървета с произволен брой наследници

Задача 1:
=
Напишете програма, която проверява дали всеки възел от двоично дърво е равен на:
- сумата от лявото и дясното му дете
- сумата от лявото и дясното му поддърво
```
Вход:
                    15
                 /      \
                5        10
              /   \     /   \
             3     2   2     8
                      
Изход: Yes

Вход:
                    16
                 /      \
                4         4
              /   \     /   \
             2     2   2     2
                      
Изход: Yes
```
[Решение...](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/blob/main/Week10/Task1)

Задача 2:
=
Напишете програма, която проверява:
- дали двоично дърво е двоично наредено дърво
```
Вход:
                    6
                 /     \
                4        8
              /   \    /   \
             3     5  7     9
                      
Изход: Yes
```
- намира максималната дълбочина на двоично наредено дърво
```
Вход:
                    6
                 /     \
                4        8
              /   \    
             3     5  
                      
Изход: 2
```
- намира минималната дълбочина на двоично наредено дърво
```
Вход:
                    6
                 /     \
                4        8
              /   \    
             3     5 
                      
Изход: 1
```
- проверява дали двоично наредено дърво е балансирано
```
Вход:
                    6
                 /     \
                4        8
              /   \    /   \
             3     5  7     9  
                      
Изход: Yes
```
[Решение...](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/blob/main/Week10/Task2)

Задача 3:
=
Напишете програма, която проверява дали дърво с произволен брой наследници:
- всичките му елементи са първите нечетни числа от 1 до броя на възлите
- и дали абсолютната разлика между два възела е идентична(Разликите в дървото трябва да са различни, няма повторения)
```
Вход:
                           1
                 /      |     |      \
                 3      5     7       9
                  
                      
Изход: Yes
```
[Решение...](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/blob/main/Week10/Task3)
