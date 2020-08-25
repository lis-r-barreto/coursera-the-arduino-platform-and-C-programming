
## Module 2 Quiz

**1. What is the name of the library which contains the printf() function?**

Answer: stdio.h

**2. What does the '\n' character mean?**

Answer: newline

**3. What type of data is surrounded by double quotes in a program?**

Answer: a string

**4. What C type is one byte long?**

Answer: char

**5. Does the following statement evaluate to True or False?**

~~~C
(10 || (5-2)) && ((6 / 2) - (1 + 2))
~~~

Answer: False

**6. What does the following program print to the screen?**

~~~C
int main ()
{ 
  int x = 0, y = 1;
  if (x || !y)
  printf("1");
  else if (y && x)
  printf("2");
  else
  printf("3");
}
~~~

Answer: 3

**7. What does the following program print to the screen?**

~~~C
int main ()
{ 
  int x = 0, z = 2;
  while (x < 3)
  { 
    printf ("%i ", x);
    x = x + z;
  }
}
~~~

Answer: 0 2

**8. What does the following program print to the screen?**

~~~C
int foo (int q) 
{ 
  int x = 1;
  return (q + x); 
} 

int main ()  
{ 
  int x = 0; 
  while (x < 3) 
  {
    printf ("%i ", x); 
    x = x + foo(x);
  } 
}
~~~

Answer: 0 1
