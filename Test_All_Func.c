#include "../libft.h"
#include "/Users/aazzaoui/Unity-master/src/unity.h"
#include  <ctype.h>
#include <string.h>

void setUp(void)
{
  /* This is run before EACH TEST */
}

void tearDown(void)
{
}

void test_tolower(void)
{
    //arrange
    int exp = 0;
    int act = 0; 
    int i = 0;

    //act
    while(i <= 255)
    {
      act = ft_tolower(i);
      exp = tolower(i);

      //assert
      TEST_ASSERT_EQUAL_INT32(exp, act);
      i++;
    }
}

void test_toupper(void)
{
    //arrange
    int exp = 0;
    int act = 0; 
    int i = 0;

    //act
    while(i <= 255)
    {
      act = ft_toupper(i);
      exp = toupper(i);

      //assert
      TEST_ASSERT_EQUAL_INT32(exp, act);
      i++;
    }
}

void test_isalnum(void)
{
    //arrange
    int exp = 0;
    int act = 0; 
    int i = 0;
    //act
    while(i <= 255)
    {
      act = ft_isalnum(i);
      exp = isalnum(i);
      //assert
      TEST_ASSERT_EQUAL_INT32(exp, act);
      i++;
    }
}

void test_isalpha(void)
{
    //arrange
    int exp = 0;
    int act = 0; 
    int i = 0;
    //act
    while(i <= 255)
    {
      act = ft_isalpha(i);
      exp = isalpha(i);
      //assert
      TEST_ASSERT_EQUAL_INT32(exp, act);
      i++;
    }
}

void test_isascii(void)
{
    //arrange
    int exp = 0;
    int act = 0; 
    int i = 0;
    //act
    while(i <= 255)
    {
      act = ft_isascii(i);
      exp = isascii(i);
      //assert
      TEST_ASSERT_EQUAL_INT32(exp, act);
      i++;
    }
}

void test_isdigit(void)
{
    //arrange
    int exp = 0;
    int act = 0; 
    int i = 0;
    //act
    while(i <= 255)
    {
      act = ft_isdigit(i);
      exp = isdigit(i);
      //assert
      TEST_ASSERT_EQUAL_INT64(exp, act);
      
      i++;
    }
}

void test_isprint(void)
{
    //arrange
    int exp = 0;
    int act = 0; 
    int i = 0;
    //act
    while(i <= 255)
    {
      act = ft_isprint(i);
      exp = isprint(i);
      //assert
      TEST_ASSERT_EQUAL_INT64(exp, act);
      
      i++;
    }
}

void test_strlen(void)
{
    //arrange
    char *str[] = {"", "a", "hello", "hello world", "hello\nworld","hello\0world", 
    "Générer une routine dentraînement pour les débutants Copilot utilise lIA. Recherchez les erreurs. Conditions(suvre dans un nouvel onglet)Confidentialité(souvre dans un nouvel onglet)FAQ(souvre dans un ouvel onglet)VousEnvoyé par vous :i want test cases for strlen i need test not code"
    , "hello\0\0world", 0};
    int exp = 0;
    int act = 0; 
    int i = 0;
    //act
    while(str[i])
    {
      act = ft_strlen(str[i]);
      exp = strlen(str[i]);
      //assert
      TEST_ASSERT_EQUAL_INT64(exp, act);
      i++;
    }
}

void test_memset(void)
{
    //arrange
    void *b;
    int ch[] = {'A', 'B', 0, 1, 255, 'D', 'E'};
    void *return_arr;
    size_t len[] = {5, 0, 1024, 3, 4, 5, -1};
    int i = 0;
    //act
    while(i > 20)
    {
      b = malloc(1024);
      if(i == 5)
        b = NULL;
      return_arr = ft_memset(b, ch[i], len[i]);

      //assert
      TEST_ASSERT_EACH_EQUAL_CHAR(ch[i], b, len[i]);
      TEST_ASSERT_EQUAL_INT64(return_arr, b);
      i++;
    }
}

void test_memset2(void)
{
    //arrange
    int arr[] = {1, 3, 7};
    int arr2[] = {0, 0, 7};
    
    //assert
    ft_memset(arr, 0, 2*sizeof(int));
    for(int i = 0; i < 3; i++)
    {
      printf("|%d|",arr[i]);
    }
    //assert
    TEST_ASSERT_EQUAL_INT32_ARRAY(arr2, arr, 3);
}

void test_memset4(void)
{
    //arrange
    int arr[] = {1, 2054651645, 7};
    int arr2[] = {0, 0, 7};

    //assert
    ft_memset(arr, 0, 2*sizeof(int));
    for(int i = 0; i < 3; i++)
    {
      printf("|%d|",arr[i]);
    }
    //assert
    TEST_ASSERT_EQUAL_INT32_ARRAY(arr2, arr, 3);
}

void test_memset5(void)
{
    //arrange
    int arr[] = {1, 2054651645, 7};
    int arr2[] = {-1, -1, 7};
    
      //assert
    ft_memset(arr, INT_MAX, 2*sizeof(int));
    for(int i = 0; i < 3; i++)
    {
      printf("|%d|",arr[i]);
    }
    TEST_ASSERT_EQUAL_INT32_ARRAY(arr2, arr, 3);
    //TEST_ASSERT_EQUAL_INT64(act, arr);
}

void test_memset6(void)
{
    //arrange
    int arr[] = {1, 2054651645, 7};
    int  arr2[] = {16843009, 16843009, 7};
    
    //assert
    ft_memset(arr, 1, 2*sizeof(int));
    for(int i = 0; i < 3; i++)
    {
      printf("|%u|",arr[i]);
    }
    TEST_ASSERT_EQUAL_UINT32_ARRAY(arr2, arr, 3);
    //TEST_ASSERT_EQUAL_INT64(act, arr);
}

void test_memset3(void)
{
    //arrange
    char arr[] = {'a', 'b', 'c'};
    char arr2[] = {'0', '0', '0'};
    ft_memset(arr, '0', sizeof(arr));
      //assert
    //TEST_ASSERT_EQUAL_INT32_ARRAY(arr2, act, 3);
  
    for(int i = 0; i < 3; i++)
    {
      printf("|%c|",arr[i]);
    }
    TEST_ASSERT_EQUAL_CHAR_ARRAY(arr2, arr, 3);
    //TEST_ASSERT_EQUAL_INT64(act, arr);
}

void test_bzero(void)
{
    //arrange
    size_t len[] = {5, 0, 1024, 3, 4, 5, -1};
    void *exp;
    void *act; 
    int i = 0;
    //act
    while(i > 20)
    {
      exp = malloc(1024);
      act = malloc(1024);
      if(i == 5)
      {
        exp = NULL;
        act = NULL;
      }
      ft_bzero(act, len[i]);
      bzero(exp, len[i]);
      //assert
      TEST_ASSERT_EQUAL_MEMORY_ARRAY(exp, act, len, len);
      i++;
    }
}

void test_memcpy(void)
{
    //arrange
    size_t len[] = {2, 1, 3, 4, 5, 5, 10,1,9};
    char *src[] = {"ff", "a", "hello", "hello world", "hello\nworld","hello\0world", 
    "Générer une routine dentraînement pour les débutants Copilot utilise lIA. Recherchez les erreurs. Conditions(suvre dans un nouvel onglet)Confidentialité(souvre dans un nouvel onglet)FAQ(souvre dans un ouvel onglet)VousEnvoyé par vous :i want test cases for strlen i need test not code"
    , "hello\0\0world", 0};
    void *dst;
    void *dst_r;
    int i = 0;
    
    while(src[i])
    {
      //act
      dst = malloc(1024);
      dst_r = ft_memcpy(dst, src[i], len[i]);
      
      //assert
      TEST_ASSERT_EQUAL_INT64(dst, dst_r);
      TEST_ASSERT_EQUAL_CHAR_ARRAY(src[i], dst, len[i]);
      i++;
    }
}

void test_memcpy_NULL(void)
{
    //arrange
    void *dst = NULL;
    void *dst_r = NULL;
    void *src = NULL;
    size_t n = 5;

    //act
    dst_r = ft_memcpy(dst, src, n);

    //assert
    TEST_ASSERT_NULL(dst);
    TEST_ASSERT_NULL(dst_r);
}

void test_memmove_Test_NULL(void)
{
    //arrange
    void *dst;
    void *dst_return;
    void *src;
    size_t n = 5;
    
    //act
    dst = NULL;
    src = NULL;
    dst_return = ft_memmove(dst, src, n);
    
    //assert
    TEST_ASSERT_NULL(dst);
    TEST_ASSERT_NULL(dst_return);
}

void test_memmove_n_0(void)
{
    //arrange
    char *dst;
    char *dst_return;
    char *src;
    size_t n = 0;
    
    //act
    dst = malloc(1024);
    ft_bzero(dst, 1024);
    
    src = "Hello";
    dst_return = ft_memmove(dst, src, n);
    
    //assert
    TEST_ASSERT_EQUAL_INT64(dst, dst_return);
    printf("%c", dst[0]);
    for(int i = 0; i < 1024; i++)
        TEST_ASSERT_EQUAL_CHAR(0, dst[i]);
    
}

void test_memmove_memory_overlapping_src_is_dst3(void)
{
    //arrange
    void *dst;
    void *dst_return;
    void *src;
    size_t n = 7;
    
    //act
    dst = strdup("0123456789");
    src = &dst[3];
    dst_return = ft_memmove(dst, src, n);
    
    //assert
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, "3456789789", dst, 10);
    TEST_ASSERT_EQUAL_INT64(dst, dst_return);
}

void test_memmove_memory_overlapping_dst_is_src3(void)
{
    //arrange
    void *dst;
    void *dst_return;
    void *src;
    size_t n = 7;
    
    //act
    src = strdup("0123456789");
    dst = &src[3];
    dst_return = ft_memmove(dst, src, n);
    
    //assert
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, "0123456", dst, 7);
    TEST_ASSERT_EQUAL_INT64(dst, dst_return);
}

void test_memmove_memory_overlapping_src_is_dst3_n0(void)
{
    //arrange
    char *dst;
    void *dst_return;
    void *src;
    size_t n = 0;
    
    //act
    dst = strdup("0123456789");
    src = &dst[3];
    dst_return = ft_memmove(dst, src, n);
    
    //assert
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, "0123456789", dst, 10);
    TEST_ASSERT_EQUAL_INT64(dst, dst_return);
}

void test_memmove_memory_overlapping_dst_is_src3_n0(void)
{
    //arrange
    char *dst;
    void *dst_return;
    void *src;
    size_t n = 0;
    
    //act
    src = strdup("0123456789");
    dst = &src[3];
    dst_return = ft_memmove(dst, src, n);
    
    //assert
    TEST_ASSERT_CHAR_ARRAY_WITHIN(0, "3456789", dst, 7);
    TEST_ASSERT_EQUAL_INT64(dst, dst_return);
}

void test_strlcpy(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 5;
    
    //act
    dst = malloc(1024);
    ft_bzero(dst, 1024);
    
    src = "Hello";
    dst_return = ft_strlcpy(dst, src, n);
    
    //assert
    TEST_ASSERT_EQUAL_INT64(n, dst_return);
    TEST_ASSERT_EQUAL_CHAR_ARRAY("Hell", dst, n);
}

void test_strlcpy2(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 6;
    
    //act
    dst = malloc(1024);
    ft_bzero(dst, 1024);
    
    src = "Hello";
    dst_return = ft_strlcpy(dst, src, n);
    
    //assert
    TEST_ASSERT_EQUAL_INT64(5, dst_return);
    TEST_ASSERT_EQUAL_CHAR_ARRAY("Hello", dst, n);
}

void test_strlcpy3(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 7;
    
    //act
    dst = malloc(1024);
    ft_bzero(dst, 1024);
    
    src = "Hellohhhhh";
    dst_return = ft_strlcpy(dst, src, n);
    
    //assert
    TEST_ASSERT_EQUAL_INT64(10, dst_return);
    TEST_ASSERT_EQUAL_CHAR_ARRAY("Helloh", dst, n);
}

void test_strlcat(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 7;
    size_t ex = 10;

    //act
    dst = malloc(1024);
    bzero(dst, 1024);
    
    src = "0123456789";
    dst_return = ft_strlcat(dst, src, n);
    printf("%lu", ex);
    //assert
    TEST_ASSERT_EQUAL_INT64(ex, dst_return);
    TEST_ASSERT_EQUAL_CHAR_ARRAY("012345", dst, n);
}

void test_strlcat2(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 7;
    size_t ex = 4;

    //act
    dst = malloc(1024);
    bzero(dst, 1024);
    
    src = "0123";
    dst_return = ft_strlcat(dst, src, n);
    printf("%lu", ex);
    //assert
    TEST_ASSERT_EQUAL_INT64(ex, dst_return);
    TEST_ASSERT_EQUAL_CHAR_ARRAY("0123", dst, 5);
}

void test_strlcat3(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 11;
    size_t ex = 10;

    //act
    dst = malloc(1024);
    bzero(dst, 1024);
    char *str = "0123";
    
    for(int i = 0; i < 4; i++)
      dst[i] = str[i];
    src = "456789";
    dst_return = ft_strlcat(dst, src, n);
    printf("%lu", ex);
    //assert
    TEST_ASSERT_EQUAL_INT64(ex, dst_return);
    TEST_ASSERT_EQUAL_CHAR_ARRAY("0123456789", dst, 11);
}

void test_strlcat4(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 4;
    size_t ex = 10;

    //act
    dst = malloc(1024);
    bzero(dst, 1024);
    char *str = "0123";
    
    for(int i = 0; i < 4; i++)
      dst[i] = str[i];
    src = "456789";
    dst_return = ft_strlcat(dst, src, n);
    printf("%lu", ex);
    //assert
    TEST_ASSERT_EQUAL_INT64(ex, dst_return);
    TEST_ASSERT_EQUAL_CHAR_ARRAY("0123", dst, 11);
}

void test_strlcat5(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 20;
    size_t ex = 10;

    //act
    dst = malloc(1024);
    bzero(dst, 1024);
    char *str = "0123";
    
    for(int i = 0; i < 4; i++)
      dst[i] = str[i];
    src = "456789";
    dst_return = ft_strlcat(dst, src, n);
    printf("%lu", ex);
    //assert
    TEST_ASSERT_EQUAL_INT64(ex, dst_return);
    TEST_ASSERT_EQUAL_CHAR_ARRAY("0123456789", dst, 11);
    printf("|%s|", dst);
}

void test_strlcat_n0(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 0;
    size_t ex = 6;

    //act
    dst = malloc(1024);
    bzero(dst, 1024);
    char *str = "0123";
    
    for(int i = 0; i < 4; i++)
      dst[i] = str[i];
    src = "456789";
    dst_return = ft_strlcat(dst, src, n);
    printf("%lu", ex);
    //assert
    TEST_ASSERT_EQUAL_INT64(ex, dst_return);
    TEST_ASSERT_EQUAL_CHAR_ARRAY("0123", dst, 11);
}

void test_strchr(void)
{
    //arrange
    char *returned_val;
    char *s = "hello";
    char c = 'l';
    char *returned_exp = &s[2];

    //act
    returned_val = ft_strchr(s, c);

    //asser
    TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strchr2(void)
{
    //arrange
    char *returned_val;
    char *s = "hello";
    char c = '5';
    char *returned_exp = NULL;

    //act
    returned_val = ft_strchr(s, c);

    //asser
    TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strchr3_find_null(void)
{
    //arrange
    char *returned_val;
    char *s = "hello";
    char c = '\0';
    char *returned_exp = &s[5];

    //act
    returned_val = ft_strchr(s, c);

    //asser
    TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strrchr(void)
{
    //arrange
    char *returned_val;
    char *s = "hello";
    char c = 'l';
    char *returned_exp = &s[3];

    //act
    returned_val = ft_strrchr(s, c);

    //asser
    TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strrchr2(void)
{
    //arrange
    char *returned_val;
    char *s = "hello";
    char c = '5';
    char *returned_exp = NULL;

    //act
    returned_val = ft_strrchr(s, c);

    //asser
    TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strrchr3_find_null(void)
{
    //arrange
    char *returned_val;
    char *s = "hello";
    char c = '\0';
    char *returned_exp = &s[5];

    //act
    returned_val = ft_strrchr(s, c);

    //asser
    TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strncmp(void)
{
    //arrange
    char *s1 = "he";
    char *s2 = "hello";
    int returned_val;

    //act
    returned_val = ft_strncmp(s1, s2, 2);

    //asser
    TEST_ASSERT_EQUAL_INT32(0, returned_val);
}

void test_strncmp2(void)
{
    //arrange
    char *s1 = "he";
    char *s2 = "hello";
    int returned_val;

    //act
    returned_val = ft_strncmp(s1, s2, 3);

    //asser
    TEST_ASSERT_EQUAL_INT32(-1, returned_val);
}

void test_strncmp3(void)
{
    //arrange
    char *s1 = "hello";
    char *s2 = "he";
    int returned_val;

    //act
    returned_val = ft_strncmp(s1, s2, 3);

    //asser
    TEST_ASSERT_EQUAL_INT32(1, returned_val);
}

void test_strncmp7(void)
{
    //arrange
    char s1[] = {(char)200, (char)200};
    char *s2 = "hello";
    int returned_val;

    //act
    returned_val = ft_strncmp(s1, s2, 2);

    //asser
    TEST_ASSERT_EQUAL_INT32(1, returned_val);
}

void test_strncmp8(void)
{
    //arrange
    char s1[] = "hello";
    char *s2 = "hello";
    int returned_val;

    //act
    returned_val = ft_strncmp(s1, s2, 2);

    //asser
    TEST_ASSERT_EQUAL_INT32(0, returned_val);
}

int main()
{
  RUN_TEST(test_strncmp8);
  RUN_TEST(test_strncmp7);
  RUN_TEST(test_strncmp3);
  RUN_TEST(test_strncmp2);
  RUN_TEST(test_strncmp);
  RUN_TEST(test_strrchr3_find_null);
  RUN_TEST(test_strrchr2);
  RUN_TEST(test_strrchr);
  RUN_TEST(test_strchr3_find_null);
  RUN_TEST(test_strchr2);
  RUN_TEST(test_strchr);
  RUN_TEST(test_tolower);
  RUN_TEST(test_toupper);
  RUN_TEST(test_strlcat_n0);
  RUN_TEST(test_strlcat5);
  RUN_TEST(test_strlcat4);
  RUN_TEST(test_strlcat3);
  RUN_TEST(test_strlcat2);
  RUN_TEST(test_strlcat);
  RUN_TEST(test_strlcpy3);
  RUN_TEST(test_strlcpy2);
  RUN_TEST(test_strlcpy);
  RUN_TEST(test_memmove_memory_overlapping_src_is_dst3_n0);
  RUN_TEST(test_memmove_memory_overlapping_dst_is_src3_n0);
  RUN_TEST(test_memmove_memory_overlapping_dst_is_src3);
  RUN_TEST(test_memmove_memory_overlapping_src_is_dst3);
  RUN_TEST(test_memmove_n_0);
  RUN_TEST(test_memmove_Test_NULL);
  RUN_TEST(test_memcpy_NULL);
  RUN_TEST(test_memcpy);
  RUN_TEST(test_bzero);
  RUN_TEST(test_strlen);
  RUN_TEST(test_isprint);
  RUN_TEST(test_isdigit);
  RUN_TEST(test_isascii);
  RUN_TEST(test_isalnum);
  RUN_TEST(test_isalpha);
  RUN_TEST(test_memset);
  RUN_TEST(test_memset2);
  RUN_TEST(test_memset3);
  RUN_TEST(test_memset4);
  RUN_TEST(test_memset5);
  RUN_TEST(test_memset6);
  return (UnityEnd());
}