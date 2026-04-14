HexToDec. C Tutorials. Embarcadero Rad Studio IDE. Simple Input/Output. Algorithms. Strings. Windows Platform. Console Application.
A console application in the C programming language.
The program does the following:
  1. Asks the user to enter a string.
  2. Checks whether the entered string is valid.
     It must be less than 9 characters long and contain only the numbers between 0 and 9 and the letters between A(a) and F(f).
  3. If the string does not meet the above conditions, it displays the message "incorrect hexadecimal number format" and exits.
  4. If the line meets the above conditions,
     A variable is introduced for the value of the decimal number and the multiplier to the power of 16 with initial values ​​of 0 and 1, respectively.
  5. The loop with the parameter is executed.
     5.1. The initial value of the parameter is set to 0, and the final value is set to the number of characters in the string (its length).
     5.2. A series of cycles is performed.
          5.2.1. The code of the next character in the string is determined. It is converted to the number between 0 and 15.
                The first case. The character is digit between 0 and 9.
                The formula used is: character code - character code "0" (or the number 48 is subtracted from the character code).
                The second case. The character is letter between A and F.
                The formula used is: character code - character code "A" + 10 
                (or the number 65 is subtracted from the character code then the number 10 is added).
                The third case. The character is letter between a and f.
                The formula used is: character code - character code "a" + 10 
                (or the number 97 is subtracted from the character code then the number 10 is added). 
                Moreover, the calculation starts from the end of the line.
          5.2.2. The resulting value is multiplied by a power of sixteen.
          5.2.3. The value obtained in the previous step is added to the decimal number variable.
          5.2.4. The variable of the factor of power 16 is multiplied by 16, since the number is octal.
    5.3. The value of the loop parameter is compared with the final value. If it is less, the loop continues. Otherwise, it terminates.
    5.4. The loop parameter variable is incremented by the loop increment. In this example, it is 1.
  6. The entered hexadecimal number and its representation in the decimal system are displayed on the screen. 
Developed in the Embarcadero Rad Studio integrated environment.

HexToDec. Занятия по C. ИС Rad Studio. Простой Ввод/Вывод. Алгоритмы. Строки. Платформа Windows. Консольное приложение.
Консольное приложение написанное на языке программирования C. 
Программа делает следующее:
  1. Просит пользователя ввести строку.
  2. Проверяет правильная ли строка была введена.
     Она должна быть короче 9 символов и содержать только цифры от 0 до 9 и буквы от A(a) до F(f).
  3. Если строка не соответсвует выше перечисленным условиям выводит сообщение "неправильный формат шестнадцатиричного числа" и завершает работу.
  4. Если строка соответствует выше перечисленным условиям,
     вводится переменная для значения десятичного числа и множителя степени 16 с начальными значениями 0 и 1 соответсвенно.
  5. Выполняется цикл с параметром.
     5.1. Начальное значение параметра устанавливается равным 0, а конечное - числу символов в строке (её длине).
     5.2. Выполняется серия цикла.
          5.2.1. Выисляется код очередного символа строки. Он переводится в число от 0 до 15.
                 1-й случай. Строка содержит символы цифр от 0 до 9.
                 Используется формула: код символа - код символа "0" (или из кода символа вычитается число 48).
                 2-й случай. Строка содержит символы букв от A до F.
                 Используется формула: код символа - код символа "A" + 10 (или из кода символа вычитается число 65 и прибавляется число 10).
                 3-й случай. Строка содержит символы букв от a до f.
                 Используется формула: код символа - код символа "a" + 10 (или из кода символа вычитается число 97 и прибавляется число 10).
                 Причём вычисление начинается с конца строки.
          5.2.2. Полученное значение умножается на множитель стерени числа шестнадцать.
          5.2.3. К переменной десятичного числа прибавляется значение полученное на предыдущем шаге.
          5.2.4. Переменная множителя степени 16 умножается на 16, так как число шестнадцатиричное. 
     5.3. Значение параметра цикла сравнивается с конечным. Если оно меньше цикл выполняется. В противном случае - завершается.
     5.4. Переменная параметра цикла увеличивается на шаг цикла. В данном примере он равен 1.
  6. На экран выводится введённое шестнадцатиричное число и его представление в десятичной системе.
Разработано в нитегрированной среде Embarcadero Rad Studio.
