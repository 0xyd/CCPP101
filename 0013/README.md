# 0011: Seed the random number generator

When we seed a fixed integer (case 1) with *srand*, the series of random numbers are also fixed. But this will cause the random generator not random at all. Therefore, we often seed the random generator with current time value case 2. But in reality, *time(NULL)* (case 3) will be more handy since it directly returns time_t objects instead of the pointer in the case 2.


## Reference
1. https://www.tutorialspoint.com/c_standard_library/c_function_srand.htm
2. https://en.cppreference.com/w/c/chrono/time_t