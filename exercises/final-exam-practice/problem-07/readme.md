Define and implement class Totaler which keeps a running total of numbers input via operator() as follows.

```
Totaler my_total; // my_total stores 0

 my_total(3.5); // add 3.5 -- now it stores 3.5

 my_total(-1.5); // add -1.5 -- now it stores 2.0

 my_total(10.1); // add 10.1 -- now it stores 12.1

 cout << my_total; // writes current value 12.1 to the console
```

Be sure to
(1) Define a constructor which takes one argument with default value 0. The value input is the initial value stored.
(2) Overload operator() so numbers input are added to the total, as demonstrated above.
(3) Overload operator<< to get console output, as demonstrated above. Store the total in a private member and make operator<< a friend function.
