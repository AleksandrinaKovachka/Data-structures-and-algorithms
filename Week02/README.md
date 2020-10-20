# Задачи - Двусвързан списък

[Имплементация на двусвързан списък](https://github.com/AleksandrinaKovachka/Data-structures-and-algorithms/tree/main/Week02/DLListImplementation)

***За всички задачи, списъците нека бъдат с char елементи***

Задача 1:
=
Чрез директно използване на възлите на двусвързан списък:

-напишете функция, която обединява два списъка като поставя между тях #
```
Пример: T->H->I->N->K      S->M->I->L->E

Решение: T->H->I->N->K->#->S->M->I->L->E
```

-напишете функция, която ви връща истина ако списъка от въведените думи разделени с # може да се подреди така, че поне една поредица от последната буква на предшественика да съвпада с първата буква на наследника (Ако думите са само две изведете False)
```
Пример: T->H->I->N->K->#->S->M->I->L->E->#->K->N->O->W->#->E->A->T     Решение: True

Пример: T->H->I->N->K->#->S->M->I->L->E->#->O->L->D       Решение: False
```

Задача 2:
=
Чрез директно използване на възлите на двусвързан списък, при последователно повторение на три елемента в списъка, премахнете първия от поредицата повтарящи се.

```
Пример: 1->2->3->3->3->4

Решение: 1->2->3->3->4

Пример: 1->2->3->3->3->3->4

Решение: 1->2->3->3->4 
```

Задача 3:
=
Чрез директно използване на възлите на двусвързан списък, напишете функция, която обръща списъка в обратен ред и поставя на първо място сбора от числата на списъка.

```
Пример: '1'->'2'->'3'

Решение: '6'->'3'->'2'->'1'
```
