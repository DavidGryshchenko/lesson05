#include <iostream>
using namespace std;
#include "lib_if_.hpp"



/*
 Даны два числа. Вывести вначале большее, а затем меньшее из них.
 */
void task8(){
    int a,b;
    cout<<"Введите первое число : ";
    cin>>a;
    cout<<"Введите второе число : ";
    cin>>b;
    if(a>b) cout<<"Число "<<a<<" больше чем "<<b<<endl;
    else cout<<"Число "<<b<<" больше чем "<<a<<endl;
    if(a<b) cout<<"Число "<<a<<" меньше чем "<<b<<endl;
    else cout<<"Число "<<b<<" меньше чем "<<a<<endl;
}

/*
 Даны две переменные вещественного типа: A, B. Перераспределить значе-
 ния данных переменных так, чтобы в A оказалось меньшее из значений,
 а в B — большее. Вывести новые значения переменных A и B.
 */

void task9(){
    float a,b;
    cout<<"Введите число A : ";
    cin>>a;
    cout<<"Введите число B : ";
    cin>>b;
    float tmp;
    if(a>b){
        tmp=a;
        a=b;
        b=tmp;
        cout<<"После перестановки число A равно "<<a<<endl;
        cout<<"После перестановки число B равно "<<b<<endl;
    }
    else{
        tmp=b;
        b=a;
        a=tmp;
        cout<<"После перестановки число A равно "<<a<<endl;
        cout<<"После перестановки число B равно "<<b<<endl;
    }
}

/*
 Даны две переменные целого типа: A и B. Если их значения не равны, то
 присвоить каждой переменной сумму этих значений, а если равны, то при-
 своить переменным нулевые значения. Вывести новые значения перемен-
 ных A и B.
 */
void task10(){
    int a,b;
    cout<<"Введите число a : ";
    cin>>a;
    cout<<"Введите число b : ";
    cin>>b;
    int sum;
    if(a==b){
        a=0;
        b=0;
        cout<<"Число  а равно "<<a<<endl;
        cout<<"Число  b равно "<<b<<endl;
    }
    else if(a!=b){
        sum = a + b ;
        a=sum;
        b=sum;
        cout<<"Число  а равно "<<a<<endl;
        cout<<"Число  b равно "<<b<<endl;
    }
}

/*
 Даны три целых числа, одно из которых отлично от двух других, равных
 между собой. Определить порядковый номер числа, отличного от осталь-
 ных.
 */

void task18(){
    int a,b,c;
    cout<<"Введите число a : ";
    cin>>a;
    cout<<"Введите число b : ";
    cin>>b;
    cout<<"Введите число c : ";
    cin>>c;
    if(a==b && b==c  && a==c) cout<<"Все числа равны"<<endl;
    else if(a==b) cout<<"Третье число "<<c<<" не равно двум другим"<<endl;
    else  if(a==c) cout<<"Второе число "<<b<<" не равно двум другим"<<endl;
    else  if(b==c) cout<<"Первое число "<<a<<" не равно двум другим"<<endl;
    else if(a!=b &&b!=c && a!=c) cout<<"Все числа разные"<<endl;
}


/*
 Даны четыре целых числа, одно из которых отлично от трех других, рав-
 ных между собой. Определить порядковый номер числа, отличного от ос-
 тальных.
 */

void task19(){
    int a,b,c,d;
    cout<<"Введите число a : ";
    cin>>a;
    cout<<"Введите число b : ";
    cin>>b;
    cout<<"Введите число c : ";
    cin>>c;
    cout<<"Введите число d : ";
    cin>>d;
    if(a==b && b==c &&  c==d) cout<<"Все числа равны"<<endl;
    else if(a==b && b==c) cout<<"Четвертое число "<<d<<" не равно другим"<<endl;
    else  if(a==b && b==d) cout<<"Третье число "<<c<<" не равно другим"<<endl;
    else  if(a==c && c==d) cout<<"Второе число "<<b<<" не равно другим"<<endl;
    else  if(b==c && c==d) cout<<"Первое число "<<a<<" не равно другим"<<endl;
    else if(a!=b &&b!=c && a!=c && b!=d && a!=d && c!=d) cout<<"Все числа разные"<<endl;
    else cout<<"Error"<<endl;
}


/*
 На числовой оси расположены три точки: A, B, C. Определить, какая из
 двух последних точек (B или C) расположена ближе к A, и вывести эту точ-
 ку и ее расстояние от точки A.
 */
void task20(){
    float a,b,c;
    cout<<"Введите координату точки A : ";
    cin>>a;
    cout<<"Введите координату точки B : ";
    cin>>b;
    cout<<"Введите координату точки C : ";
    cin>>c;
    float lineAB;
    float lineAC;
    if(b>a){
        lineAB = b-a;
    }
    else{
        lineAB = a - b;
    }
    if(c>a){
        lineAC = c-a;
    }
    else{
        lineAC = a - c;
    }
    if(lineAB>lineAC){
        cout<<"Т. B с координатой "<<b<< " ,составляет с т. A больший отрезок  "<<lineAB<<endl;
        
    }
    else{
        cout<<"Т. C с координатой "<<c<< " ,составляет с т. A отрезок больший "<<lineAC<<endl;

    }
}

/*
 Дан номер года (положительное целое число). Определить количество
 дней в этом году, учитывая, что обычный год насчитывает 365 дней, а ви-
 сокосный — 366 дней. Високосным считается год, делящийся на 4, за ис-
 ключением тех годов, которые делятся на 100 и не делятся на 400 (напри-
 мер, годы 300, 1300 и 1900 не являются високосными, а 1200 и 2000 — яв-
 ляются).
 */
 
void task28(){
    int year;
    cout<<"Введите номер года : ";
    cin>>year;
    if(year>0){
        if(year%400==0 || year%4==0 && year%100!=0){
            cout<<"Год - высокосный, в нем 366 дней"<<endl;
        }
        else{
            cout<<"Год - не  является высокосным, в нем 365 дней"<<endl;
        }
    }
    else cout<<"Введите целое положительное число"<<endl;
}

/*
 Дано целое число. Вывести его строку-описание вида «отрицательное чет-
 ное число», «нулевое число», «положительное нечетное число» и т. д.
 */

void task29(){
    int num;
    cout<<"Введите целое число : ";
    cin>>num;
    if(num>0){
        if(num%2==0){
            cout<<num<<" - положительное четное число"<<endl;
        }
        else if (num % 2!=0){
            cout<<num<<" - положительное нечетное число"<<endl;
        }
    }
    else if (num<0){
        if(num%2==0){
            cout<<num<<" - отрицательное  четное число"<<endl;
        }
        else if(num %2 !=0){
            cout<<num<<" - отрицательное нечетное число"<<endl;
        }
    }
    else{
        cout<<num<<" - нулевое число"<<endl;
    }
}

/*
 Дано целое число, лежащее в диапазоне 1–999. Вывести его строку-
 описание вида «четное двузначное число», «нечетное трехзначное число»
 и т. д.
 */

void task30(){
    int num;
    cout<<"Введите целое число в диапозоне 1-999: ";
    cin>>num;
    if(num<1 || num>999){
        cout<<"Введите целое число в диапозоне 1-999"<<endl;
    }
    else{
                    if(num/100!=0){
                        if(num%2==0){
                            cout<<num<<" - положительное трехзначное четное число"<<endl;
                        }
                        else if(num%2!=0){
                            cout<<num<<" - положительное трехзначное нечетное число"<<endl;
                        }
                    }
                    else if(num/100==0 && num/10!=0){
                        if(num%2==0){
                            cout<<num<<" - положительное двухзначное четное число"<<endl;
                        }
                        else if(num%2!=0){
                            cout<<num<<" - положительное двухзначное нечетное число"<<endl;
                        }
                    }
                    else{
                        if(num%2==0){
                            cout<<num<<" - положительное  четное число"<<endl;
                        }
                        else if(num%2!=0){
                            cout<<num<<" - положительное  нечетное число"<<endl;
                        }
                    }

    }
}




void menuNum(){
    int menuNumber;
    cout<<"Виберите пункт меню : "<<endl;
    cout<<"1.task_if_8"<<endl;
    cout<<"2.task_if_9"<<endl;
    cout<<"3.task_if_10"<<endl;
    cout<<"4.task_if_18"<<endl;
    cout<<"5.task_if_19"<<endl;
    cout<<"6.task_if_20"<<endl;
    cout<<"7.task_if_28"<<endl;
    cout<<"8.task_if_29"<<endl;
    cout<<"9.task_if_30"<<endl;
    cout<<"Введите номер задания : ";
    cin>>menuNumber;
    
    
    switch (menuNumber) {
        case 1: task8();
            break;
        case 2: task9();
            break;
        case 3: task10();
            break;
        case 4: task18();
            break;
        case 5: task19();
            break;
        case 6: task20();
            break;
        case 7: task28();
            break;
        case 8: task29();
            break;
        case 9: task30();
            break;
        default:"Error";
            break;
    }
}
