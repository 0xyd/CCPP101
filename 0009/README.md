# 0009: static functions

Static functions are the functions that are only visible inside the same object file. In this sample, we have 2 c files: one is the *main.c* and the other is *other.c*. 

We declare a static function in other.c and try to import it to the *main.c*.
```c
static void call_another_static() {
	printf("Call a static function from other.c \n");
}
```

However, when the compiler processes the code, an error will occur and say it cannot find the function. To access the static function in *main.c*, one could wrap the static function with a non-static function in the same file such as:
```c
void call_bypass_static() {
	printf("bypass static \n");
	call_another_static();
	printf("bypass happily :D \n");
}
```
Now, we can use the *call_another_static()* by calling the *call_bypass_static()* in main.

## Reference
1. https://www.tutorialspoint.com/static-functions-in-c#:~:text=A%20static%20function%20in%20C,keyword%20before%20the%20function%20name.
1. https://stackoverflow.com/questions/558122/what-is-a-static-function-in-c