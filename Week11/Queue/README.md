# Опашка

Теория:
=
- FIFO - първи влязъл, първи излязъл
- достъп до първия елемент
- опашките могат да бъдат ограничени и неограничени. Ограничените имат точно определен брой места за съхранение в паметта, неограничените могат да нарастват произволно до достигане ограниченията на хардуера
- основни операции:

  -> empty
  
  -> size
  
  -> front
  
  -> back
  
  -> push_back
  
  -> pop_front
  
  -> Всички * - за констатна сложност
  
- циклична опашка
- приоритетна опашка

Задача:
=
Напишете програма, която приема от файл рецепта за ястие, с грамажи на продукти и инструкции. На екрана първо изведете грамажите на продуктите, а след това инструкциите
```
Пример:
Вход: 4 eggs
      Beat eggs
      1 baking soda
      adding baking soda
      1/4 white cheese
      keep beating and add crumbed (or grated or crushed) cheese
Изход: 4 eggs, 1 baking soda, 1/4 white cheese
       Beat eggs, adding baking soda, keep beating and add crumbed (or grated or crushed) cheese
```
