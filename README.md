
# Список 1
## Графи, дерева. Додавання та видалення елементів/вершин/ребер. Побудова кістякового дерева для заданого графу. (4)

 + за побудову мінімального кістякового дерева; 


# Список 2: класи для опису даних.
## Інформація про дату (рік, місяць, день) та час (години, хвилини, секунди). Перевірка правильності дати та часу відповідно до григоріанського календаря. Арифметика моментів часу: різниця між двома моментами часу у заданих одиницях, додавання чи віднімання такої різниці до заданого моменту часу. Обчислення дня тижня для заданої дати.(2)

+ за обчислення додаткових параметрів, наприклад, номер тижня в місяці та в році


> Всього баллів 8 


# Time Unit 
---

   "year"  
   
   "month"
  
   "week"
  
   "day"
  
   "hour"
  
   "minute"
  
   "second";
# Set a Time Point
  ```Time t1( "year", "month","day","hour","minute","second"; )```
  
  
  
# Functions 

 ## <sub> Time Difference. Measure the time difference.</sub> 
```long int Time:: dif(Time an){
    long int result = 0;
    long int a = CompToSec(an.year,an.month,an.day,an.hour,an.minute,an.second);
    long int c = CompToSec(year,month,day,hour,minute,second);
    if(a>c){
      result = a-c;
    }
    else{
    result = c-a;
    }
    return result;
}
```


## <sub> Addition Time .  Adding time to choosen date .</sub> 
```long int Time:: add(Time some ){
   long int a =  CompToSec( year, month, day, hour, minute , second);
   long int c = dif(some);
   c = a+c;
   c = some.decompress(c);
  return c;
  ```
  
  
## <sub> number of Month and Year week.Count number of week that have already ended durind the year and the month</sub>  
```void Time:: get_Year_and_Month_week(){
    int findday=0;
  for(int i=1; i<month; i++)
    {
            findday=result+no_of_days_in_month(i,year);
    }
    int year_week = findday + day;
    year_week = month_week/7;
    int month_week = day/7;
    cout <<  year_week <<" "<< month_week ;
}
```


## <sub>  Week. Shows the day of week </sub> 
```string Time :: Nweek(){
long int temp=0;
int b = 0;
for(int i=1; i<month; i++)
    {
            b=b+no_of_days_in_month(i,year);
    }
        for(int i=1; i<year; i++)
        {
            if(check_leap_year(i))
                temp=temp+366;
            else
                temp=temp+365;
        }
        long int week = temp + b + day;
        string  res; 
switch (week%7)
    {
    case 1: res = "monday";
        break;
    case 2: res = "Tuesday";
        break;
    case 3: res = "Wednesday";
        break;
    case 4: res = "Thursday";
        break;
    case 5: res = "Friday";
        break;
    case 6: res = "Saturday";
        break;
    case 0: res = "Sunday";
        break;
    default:
        break;
    }
    return res;
}```
