/*
Course: CSCI 247 - Winter 2021
File Name: Lab1.c
Name: Lily Bjork
*/

/*Preprocessor Directives, such as #include, or #define, are instructions that are given to the compiler to process before it compiles the rest of the code.
Forward declarations, like we used with DataTypeSizes(), are used to declare a function before it is defined, so that we can use the function in code that 
comes before the definition. This allows our formatting to be less strict, and enables more recursive type functions.
Macro: a macro is a small piece of code that we have named so that we can call on it with that name later. For example in our code we defined DATA_TYPE.
Functions such as DataTypeSizes(), are used as opposed to just putting all of our code in main in order to keep our code in shorter, easier to understand, segments.
Escape Character(\) is used while formatting text in a string such as within our printf function. 
Operators are pre-defined symbols that tell the compiler to do certain operations, such as sizeof(), which we use in our code, which returns the size of the variable.
Keywords such as int or void are pre-defined words that the compiler will automatically recognize and use for context.
printf function is a print formatting function. In our code, we print a string (%s) and we print a long-signed integer value (%ld).
*/

#include <stdio.h>
#include <string.h> 

#define DATA_TYPE_NAME "float"
#define DATA_TYPE float

void DataTypeSizes(void);
char* GetStringFromStdin(char * str);
void DisplayString(const char * str);

int main(int argc, char* argv[]){
	printf("argc= %i  argv[]= %s \n",argc,argv[0]);
	DisplayString(argv[1]);
	DisplayString(argv[2]);
	DataTypeSizes();
	char str[100];
	GetStringFromStdin(str);
	DisplayString(str);
	return(0);
}

char* GetStringFromStdin(char * str){
	printf("Input string: ");
	str=fgets(str,100,stdin);
}

void DisplayString(const char * str){
	printf("%s \n",str);
}

void DataTypeSizes(void){
	printf("\"%s\" is a standard C datatype. Size of \"%s\" data type is = %ld\r\n",DATA_TYPE_NAME,DATA_TYPE_NAME,sizeof(DATA_TYPE));
}


