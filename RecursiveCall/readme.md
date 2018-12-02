# Recursive Call Directory 
## euclidean_algorithm.cpp 
euclidean algorithm is an algorithm to calculate the greatest common factor.   
In this program, there are two different function to caliculate the common factor. 

- recursive call version : recursive_euclid_algorithm 
- while-loop version     : euclid_algorithm  

###Execution Result

#### Case1: if greatest common is 1

| function      | exec time (msec)  | m  | n | greatest common factor| 
| ------------- |:-------------:| -----:| -----:| ---:|
|recursive_euclid_algorithm| <font color="green"> 36.000000 </font> | 264123568 | 97| 1|
|euclid_algorithm  |<font color="orange"> 52.000000 </font> |  264123568  | 97  |1|


#### Case2: if greatest common is 16 

| function      | exec time  (msec)    | m  | n | greatest common factor|
| ------------- |:-------------:| -----:| -----:| ---:|
|recursive_euclid_algorithm|<font color="orange">28.000000</font> | 264123568 | 96| 16|
|euclid_algorithm  | <font color="green"> 25.000000 </font> |  264123568 | 96|16|

