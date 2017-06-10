
#include <stdio.h>
#include <stdlib.h>
#include "my_string.h"
#define SIZE 100
int main(int argc, char* argv[])
{
	/*MY_STRING hMy_string = NULL;
	FILE* fp;
	hMy_string = my_string_init_default();
	//fp = fopen("simple.txt", "r");
	fp = fopen("dictionary.txt", "r");
	while(my_string_extraction(hMy_string, fp))
	{
		//my_string_insertion(hMy_string, stdout);
		//printf("\n");
		//if(fgetc(fp)== ' ')
		//{
			//printf("Found a space after the string\n");
		//}
		if((my_string_get_size(hMy_string))==29)
		{
			my_string_insertion(hMy_string, stdout);
			printf("\n");
		}
	}
	my_string_destroy(&hMy_string);
	fclose(fp);
	return 0;*/
	

	MY_STRING new_key = NULL;
	MY_STRING new_key1 = NULL;
	MY_STRING new_key2 = NULL;
	MY_STRING new_key3 = NULL;

	MY_STRING item = NULL;
	MY_STRING item1 = NULL;
	MY_STRING item2 = NULL;
	MY_STRING item3 = NULL;

	MY_STRING old_key = NULL;
	MY_STRING old_key1 = NULL;
	MY_STRING old_key2 = NULL;
	MY_STRING old_key3 = NULL;


	item = my_string_init_c_string("The");
	old_key = my_string_init_c_string("---");
	new_key = my_string_init_default();




	item1 = my_string_init_c_string("Truck");
	old_key1 = my_string_init_c_string("-----");
	new_key1 = my_string_init_default();



	item2 = my_string_init_c_string("happy");
	new_key2 = my_string_init_default();
	old_key2 = my_string_init_c_string("--ppy");



	item3 = my_string_init_c_string("awesome");
	new_key3 = my_string_init_default();
	old_key3 = my_string_init_c_string("--e---e");

	get_word_key_value(item, new_key, old_key, 't');
	
	get_word_key_value(item1, new_key1, old_key1, 'r');
	get_word_key_value(item2, new_key2, old_key2, 'h');
	get_word_key_value(item3, new_key3, old_key3, 'z');
	my_string_destroy(&item);
	my_string_destroy(&item1);
	my_string_destroy(&item2);
	my_string_destroy(&item3);
	my_string_destroy(&old_key);
	my_string_destroy(&old_key1);
	my_string_destroy(&old_key2);
	my_string_destroy(&old_key3);
	my_string_destroy(&new_key);
	my_string_destroy(&new_key1);
	my_string_destroy(&new_key2);
	my_string_destroy(&new_key3);
	//for(i=0;i<SIZE;i++)
	//{
	//	my_string_insertion(hMy_string[i],stdout);
	//	printf("\n");
	//	my_string_destroy(&hMy_string[i]);
	//}

	
	return 0;
}


