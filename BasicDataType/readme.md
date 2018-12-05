# Basic Data Type 
## File Despcription 
- Euler_constant_calc.cpp --> calculate Euler constant 
- type_conversion.cpp --> show the different result due to type mismatch


## Execute 

### Execute type_conversion.cpp
```sh
$gcc type_conversion.cpp 
type_conversion.cpp:42:31: warning: format specifies type 'double' but the argument has type 'int' [-Wformat]
            printf("\t%6.1f", weight/((height/100)*(height/100)));
                      ~~~~~   ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                      %6.1d
1 warning generated.

$ls 
Euler_constant_calc.cpp a.out                   readme.md               type_conversion.cpp
$ ./a.out
---------Convert to Decimal--------------
        50[kg]  55[kg]  60[kg]  65[kg]  70[kg]  75[kg]  
150 [cm]          22.2    24.4    26.7    28.9    31.1    33.3
155 [cm]          20.8    22.9    25.0    27.1    29.1    31.2
160 [cm]          19.5    21.5    23.4    25.4    27.3    29.3
165 [cm]          18.4    20.2    22.0    23.9    25.7    27.5
170 [cm]          17.3    19.0    20.8    22.5    24.2    26.0
175 [cm]          16.3    18.0    19.6    21.2    22.9    24.5
180 [cm]          15.4    17.0    18.5    20.1    21.6    23.1
---------Not Convert to Decimal-----------
        50[kg]  55[kg]  60[kg]  65[kg]  70[kg]  75[kg]  
150 [cm]          23.1    23.1    23.1    23.1    23.1    23.1
155 [cm]          23.1    23.1    23.1    23.1    23.1    23.1
160 [cm]          23.1    23.1    23.1    23.1    23.1    23.1
165 [cm]          23.1    23.1    23.1    23.1    23.1    23.1
170 [cm]          23.1    23.1    23.1    23.1    23.1    23.1
175 [cm]          23.1    23.1    23.1    23.1    23.1    23.1
180 [cm]          23.1    23.1    23.1    23.1    23.1    23.1
$ 
$
```

### Execute Euler_constant_calc.cpp
```sh
$gcc Euler_constant_calc.cpp 
$
$ ./a.out
.........
Euler(4997000) is 0.57721576496028
Euler(4998000) is 0.57721576494025
Euler(4999000) is 0.57721576492023
Euler(5000000) is 0.57721576490022
$
```


### 1_3hardy_ramanujan_number.c
```sh
answer:1729 = 1 ^ 3 + 12 ^ 3 = 9 ^ 3 + 10 ^ 3
```
