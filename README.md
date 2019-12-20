# -labs
Решённые лабораторные работы для курсового проекта на С++
-------------------------------------------------------------------------------
Лабораторная работа №1:
Цель работы. Изучить методы передачи параметров функции: передача
параметров по значению, по ссылке. Используя эти возможности, уметь
описывать алгоритмы численных методов на примере вычисления
определенных интегралов и корней нелинейных уравнений.

Задание 1 Написать функцию, с помощью которой вычислить (см.табл.1).
sin(x+1)/(x+0.1)
(Задание - Вычислить значение корня нелинейного уравнения методом Ньютона.)

Задание 2. Написать новую функцию так, чтобы она могла вычислить
значения двух величин (вернуть два значения). Варианты заданий приведены в
табл.2.
(Задание - Добавить количество итераций, потребовавшееся для вычисления корня.)

-------------------------------------------------------------------------------
Лабораторная работа №2:
Цель работы.
Изучить работу с файлами. Уметь выполнять запись информации в файл, чтение данных из файла, проводить корректировку информации содержащейся в файле. Выполнить построение графиков средствами Matlab по данным файла, записанного с помощью языка С++, таким образом научиться осуществлять простейшую связь языков С++ и Matlab.

Задание 1
1. На [a,b] c шагом h записать значения аргумента x и функции f(x) в файл. ( f(x) из таблицы 3 лаб.раб.№1 )
Функция - sin(x+1)/(x+0.1)
2. Написать новую программу для считывания данных из файла.
По результатам считывания выполнить задание (см.табл.4)
(Получить массив значений f(x) < заданного p.)
3. По данным, записанным в файл, в MATLAB’е построить график зависимости f(x) от x на [a,b].
Задание 2
1. Записать в файл текст (несколько предложений).
2. Считать текст из файла (отдельная программа), после чего выполнить (см. Табл.5).
(Вывести самое длинное слово последнего предложения текста.)

-------------------------------------------------------------------------------
Лабораторная работа №3:
Цель работы.
Изучить новый тип данных – структуры, который позволит создавать пользовательские типы данных. Изучить возможности по созданию баз данных (массивов структур), их корректировке, поиску нужной информации.
Задание.
1. Разработать программу, выполняющую следующие функции:
1. Ввод данных об n объектах в массив структур (0<n<=50);
2. Сортировка массива структур (объектов) по одному из полей
структуры;
3. Поиск структуры по значению одного из полей.
Для поиска объекта (структуры) в упорядоченном массиве использовать бинарный поиск (деление отрезка пополам).
Варианты заданий приведены в табл. 6.
(Объект - Книга (учетный номер, шифр, авторы, название книги, год издания), поле, по которому выполняется упорядочивание:
Учетный номер)

-------------------------------------------------------------------------------
Лабораторная работа №4:
Цель работы.
Познакомиться с основами объектно-ориентированного программирования. Изучить такие понятия как классы, закрытые, открытые элементы (private, public), конструктор, деструктор. Уметь писать интерфейсные функции, осуществлять перегрузку функций, перегрузку операций.
Задание.
Разработать класс для обработки объектов в соответствии с требованием индивидуального варианта задания.
1. Класс должен быть реализован на основе статического массива. Деструктор не нужен.
2. Выполнить задание пункта 1 на основе динамического массива. Предусмотреть использование деструктора.

(Класс множество
Данные. Размер множества, массив для хранения элементов множества.
Методы класса:
1. Конструктор, создающий множество (на основе вектора), инициализированное случайными числами (исключить повтор элементов в множестве).
2. Вывод элементов множества на экран.
3. Объединение двух множеств.
Операции:
1. Объединение двух множеств.)

