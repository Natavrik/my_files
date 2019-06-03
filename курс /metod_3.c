// подключение библиотек
// стандартный заголовочный файл ввода-вывода
#include <stdio.h>
// математическая библиотека
#include <math.h> 
// объявление функции f в ней мы выводим наше уравнение
double f(double, double , double ); 


// объявление главной функции
int main ( ) 
{ 
// объявление переменных типа double 
double x0, x1, otv=0, y, c, d, epsilon; 
// объявление переменной типа int (счётчик итераций)
int k=0;
// вывод текста на экран     
printf ("введите точки x0 и x1 \n"); 
printf ("введите x0: "); 
// ввод значения а
scanf ("%lf", &x0); 
printf ("введите x1: ");
// ввод значения b
scanf ("%lf", &x1); 
printf ("введите точность вычислений: "); 
// ввод значения epsilon
scanf ("%lf", &epsilon);
printf ("введите с: ");
// ввод значения c
scanf ("%lf", &c); 
printf ("введите d: "); 
// ввод значения d
scanf ("%lf", &d);
// перенос каретки на следующую строку
printf ("________________________________\n\n");
// цикл с предусловием
do { 
// приравнивание переменнной y значение otv
y=otv; 
//приравнивание переменнной otv выражение 
otv=x1-((x1-x0)/(f(x1,c,d)-f(x0,c,d)))*f(x1,c,d); 
// приравнивание переменнной a значение b
x0=x1; 
// приравнивание переменнной b значение otv
x1=otv; 
// постинкремент (счётчик итераций)
k++;
// вывод на экран значений k и otv
printf("%d) %lf\n\n", k, otv); 
} 
// пока y-otv по модулю больше или равно epsilon
while (fabs(y-otv)>=epsilon); 
// перенос каретки на следующую строку
printf ("________________________________\n"); 
// вывод на экран значений otv и k
printf ("\n    Ответ: x = %lf\n"
        "При итерации = %d\n", otv, k); 
// успешное выполнение программы
return 0; 
} 


// объявление функции f 
double f(double x, double c, double d) 
{ 
// вывод уравнений
return pow(x,4)+c*pow(x,3)-d*x;
//return pow(x,5)+c*pow(x,2)-d;
//return sin(c*x)-d; 
//return c*pow(x,2)-d;
//return cos(c*x)-d;
//return sqrt(c*x)-d;				
}
