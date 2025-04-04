#include "stringLib.h"
#include <stdarg.h>
#include <string.h>
#include <stddef.h>

int strlistOR(char const* str1,int argc,...){
    va_list args;
    va_start(args, argc);

	int i;
	for(i = 0;i < argc;i++){
		if(strcmp(str1,va_arg(args,char*)) == 0){
			va_end(args);
			return 0;
		}
	}

    va_end(args);

	return 1;
}

char** strGetMatchPattern(char const* str1,int argc,...){
	va_list args;
    va_start(args, argc);

	int i;
	for(i = 0;i < argc;i++){
		char** tmp = va_arg(args,char**);
		if(strcmp(str1,*tmp) == 0){
			va_end(args);
			return tmp;
		}
	}

    va_end(args);

	return NULL;
}
