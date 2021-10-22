#include "../inc/libmx.h"

char *mx_file_to_str(const char *filename){
    if(!filename){
        return NULL;
    }

	int buff = open(filename, O_RDONLY);
	if(*filename < 0){
		close(buff);
		return NULL;
	}

	int count = 0;
	char c;

    while(read(buff, &c, 1)){
        count++;
    }

    close(buff);

	if(count == 0){
        return NULL;
    }
    int buff1 = open(filename, O_RDONLY);

	char *str = mx_strnew(count);

	read(buff1, str, count);
	close(buff1);
	
	return str;

}
