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

void test_memcpy_size_bigger_then_src(void)
{
    //arrange
    void *des; 
    void *des_r;
    void *exp_des;
    des = malloc(1024);
    ft_bzero(des, 1024);
    exp_des = malloc(1024);
    ft_bzero(exp_des, 1024);
    char *src = "Hello";

    //act
    des_r = ft_memcpy(des, src, 8);
    memmove(exp_des, src, 8);

    //assert
    TEST_ASSERT_EQUAL_INT64(des, des_r);
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(exp_des, des, 8, 8);
}

void test_memmove_size_bigger_then_src(void)
{
    //arrange
    void *des; 
    void *des_r;
    void *exp_des;
    des = malloc(1024);
    ft_bzero(des, 1024);
    exp_des = malloc(1024);
    ft_bzero(exp_des, 1024);
    char *src = "Hello";

    //act
    des_r = ft_memmove(des, src, 8);
    memmove(exp_des, src, 8);

    //assert
    TEST_ASSERT_EQUAL_INT64(des, des_r);
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(exp_des, des, 8, 8);
}

void test_memmove_dst_NULL(void)
{
    //arrange
    void *dst;
    void *dst_return = NULL;;
    void *src;
    size_t n = 5;
    
    //act
    dst = NULL;
    src = "Hello";
    dst_return = ft_memmove(dst, src, n);
    
    //assert
    TEST_ASSERT_NULL(dst);
    TEST_ASSERT_NULL(dst_return);
}

void test_memmove_src_NULL(void)
{
    //arrange
    void *dst;
    void *dst_return;
    void *src;
    size_t n = 5;
    
    //act
    dst = malloc(1024);
    src = NULL;
    dst_return = ft_memmove(dst, src, n);
    
    //assert
    TEST_ASSERT_NULL(dst);
    TEST_ASSERT_NULL(dst_return);
}

void test_memcpy_dst_NULL(void)
{
    //arrange
    void *dst;
    void *dst_return = NULL;;
    void *src;
    size_t n = 5;
    
    //act
    dst = NULL;
    src = "Hello";
    dst_return = ft_memcpy(dst, src, n);
    
    //assert
    TEST_ASSERT_NULL(dst);
    TEST_ASSERT_NULL(dst_return);
}

void test_memcpy_src_NULL(void)
{
    //arrange
    void *dst;
    void *dst_return;
    void *src;
    size_t n = 5;
    
    //act
    dst = malloc(1024);
    src = NULL;
    dst_return = ft_memcpy(dst, src, n);
    
    //assert
    TEST_ASSERT_NULL(dst);
    TEST_ASSERT_NULL(dst_return);
}

void test_strlcpy_src_null(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 6;
    
    //act
    dst = malloc(1024);
    ft_bzero(dst, 1024);
    
    src = NULL;
    dst_return = ft_strlcpy(dst, src, n);
}

void test_strlcpy_dst_null(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 6;
    
    //act
    dst = NULL;
    
    src = "Hello";
    dst_return = ft_strlcpy(dst, src, n);
}

void test_strlcpy_size_bigger_then_dst(void)
{
    //arrange
    char *dst; 
    size_t dst_r;
    void *exp_dst;
    dst = malloc(5);
    ft_bzero(dst, 5);
    exp_dst = malloc(5);
    ft_bzero(exp_dst, 5);
    char *src = "Hello";

    //act
    dst_r = ft_strlcpy(dst, src, 6);

    //assert
    TEST_ASSERT_EQUAL_CHAR_ARRAY("Hello", dst, 6);
}

void test_strlcat_src_null(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 5;
    size_t ex = 6;

    //act
    dst = malloc(1024);
    bzero(dst, 1024);
    char *str = "0123";
    
    for(int i = 0; i < 4; i++)
      dst[i] = str[i];
    src = NULL;
    dst_return = ft_strlcat(dst, src, n);
    printf("%lu", ex);
    //assert
}

void test_strlcat_dst_null(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 5;
    size_t ex = 6;

    //act
    dst = NULL;
    src = "0123";
    dst_return = ft_strlcat(dst, src, n);
    printf("%lu", ex);
    //assert
}

void test_strchr_s_null(void)
{
    //arrange
    char *returned_val;
    char *s = NULL;
    char c = 'A';
    char *returned_exp = &s[5];

    //act
    returned_val = ft_strchr(s, c);

    //asser
    TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strrchr_s_null(void)
{
    //arrange
    char *returned_val;
    char *s = NULL;
    char c = 'A';
    char *returned_exp = &s[5];

    //act
    returned_val = ft_strrchr(s, c);

    //asser
    TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strncmp4(void)
{
    //arrange
    char *s1 = NULL;
    char *s2 = "he";
    int returned_val;

    //act
    returned_val = strncmp(s1, s2, 3);

    //asser
    TEST_ASSERT_EQUAL_INT32(-1, returned_val);
}

void test_strncmp5(void)
{
    //arrange
    char *s1 = "he";
    char *s2 = NULL;
    int returned_val;

    //act
    returned_val = strncmp(s1, s2, 3);

    //asser
    TEST_ASSERT_EQUAL_INT32(-1, returned_val);
}

void test_strncmp6(void)
{
    //arrange
    char *s1 = NULL;
    char *s2 = NULL;
    int returned_val;

    //act
    returned_val = strncmp(s1, s2, 3);

    //asser
    TEST_ASSERT_EQUAL_INT32(-1, returned_val);
}

int main()
{
  //These tests is run without -fsanitize=address
  //RUN_TEST(test_strncmp6);//This Test Should cause Segmentation
  //RUN_TEST(test_strncmp5);//This Test Should cause Segmentation
  //RUN_TEST(test_strncmp4); //This Test Should cause Segmentation
  //RUN_TEST(test_strrchr_s_null); //This Test Should cause Segmentation
  //RUN_TEST(test_strchr_s_null); //This Test Should cause Segmentation
  //RUN_TEST(test_strlcpy_dst_null); //This Test Should cause Segmentation
  //RUN_TEST(test_strlcpy_src_null); //This Test Should cause Segmentation
  //RUN_TEST(test_memcpy_dst_NULL); //This Test Should cause Segmentation
  //RUN_TEST(test_memcpy_src_NULL); //This Test Should cause Segmentation
  //RUN_TEST(test_memmove_src_NULL); //This Test Should cause Segmentation
  //RUN_TEST(test_memmove_dst_NULL); //This Test Should cause Segmentation
  //RUN_TEST(test_strlcat_src_null); //This Test Should cause Segmentation
  //RUN_TEST(test_strlcat_dst_null); //This Test Should cause Segmentation

  RUN_TEST(test_strlcpy_size_bigger_then_dst);
  RUN_TEST(test_memcpy_size_bigger_then_src);
  RUN_TEST(test_memmove_size_bigger_then_src);
  return (UnityEnd());
}