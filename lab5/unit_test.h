#ifndef UNIT_TEST_H
#define UNIT_TEST_H
#include "my_string.h"

Status test_init_default_returns_nonNULL(char*buffer, int length);
Status test_get_size_on_init_default_returns_0(char* buffer, int length);

Status test_my_string_init_c_string_returns_NULL(char* buffer, int length);
Status test_my_string_get_size_return_0(char* buffer, int length);

Status test_my_string_get_capacity_returns_0(char* buffer, int length);

Status test_my_string_compare_returns_0(char* buffer, int length);

Status test_my_string_destroy_returns_SUCCESS(char* buffer, int length);

Status test_my_string_extraction_returns_SUCCESS(char* buffer, int length);
Status test_my_string_insertion_returns_SUCCESS(char* buffer, int length);

Status test_my_string_push_back_returns_SUCCESS(char* buffer, int length);
Status test_my_string_pop_back_returns_SUCCESS(char* buffer, int length);
Status test_my_string_at_returns_c(char* buffer, int length);
Status test_my_string_c_str_returns_c(char* buffer, int length);

Status test_my_string_concat_returns_0(char* buffer, int length);
Status test_my_string_empty_returns_SUCCESS(char* buffer, int length);

Status test_my_string_compare_returns_0a(char* buffer, int length);
Status test_my_string_compare_returns_0b(char* buffer, int length);
Status test_my_string_compare_returns_0c(char* buffer, int length);
Status test_my_string_compare_returns_0d(char* buffer, int length);
Status test_my_string_compare_returns_0e(char* buffer, int length);
Status test_my_string_compare_returns_0f(char* buffer, int length);
Status test_my_string_compare_returns_0g(char* buffer, int length);
Status test_my_string_compare_returns_0h(char* buffer, int length);
Status test_my_string_compare_returns_0i(char* buffer, int length);
Status test_my_string_compare_returns_0j(char* buffer, int length);


#endif
