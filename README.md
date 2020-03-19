# libft

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/d1bd308375ce46a1a7c8698a9c3e754b)](https://app.codacy.com/manual/juanlamarao/42_libft?utm_source=github.com&utm_medium=referral&utm_content=juanlamarao/42_libft&utm_campaign=Badge_Grade_Dashboard)

Remake of classic functions of libC, stdlib, new functions +linked list operations

### SCORE ON 42CURSUS:
PART 1 - 100%, PART 2 - 100%, BONUS PART - Seg fault

## Compilation
1. git clone <https://github.com/juanlamarao/42_libft
2. cd 42_libft
3. make

## How to test
1. Compile libft.a
2. Include in your project the libft.h file
3. Compile your project with <-L. ft> flag

## Functions List
### 1st part
* ft_memset
> Set _len_ bytes of _b_ with char content of _c_  
> <void   \*ft_memset(void \*b, int c, size_t len);>
* ft_bzero
> Set _len_ bytes of _s_ with '\0'  
> <void   ft_bzero(void \*s, size_t n);>
* ft_memcpy
> 
> <void   \*ft_memcpy(void \*dst, const void \*src, size_t n);>
* ft_memccpy
> 
> <void   \*ft_memccpy(void \*dst, const void \*src, int c, size_t n);
* ft_memmove
> 
> <void   \*ft_memmove(void \*dst, const void \*src, size_t n);>
* ft_memchr
> 
> <void   \*ft_memchr(const void \*s, int c, size_t n);>
* ft_memcmp
> 
> <void   \*ft_memcpy(void \*dst, const void \*src, size_t n);>
* ft_strlen
> 
> <int    ft_strlen(const char \*s);>
* ft_strdup
> 
> <char   \*ft_strdup(const char \*s);>
* ft_calloc
> 
> <void   \*ft_calloc(size_t nmemb, size_t size);>
* ft_strlcat
> 
> <size_t  ft_strlcat(char \*dst, const char \*src, size_t destsize);>
* ft_strchr
> 
> <char   \*ft_strchr(const char \*s, int c);>
* ft_strrchr
> 
> <char   \*ft_strrchr(const char \*s, int c);>
* ft_strstr
> 
> 
* ft_strnstr
> 
> <char   \*ft_strnstr(const char \*s1, const char \*s2, size_t len);>
* ft_strncmp
> 
> <int    ft_strncmp(const char \*s1, const char \*s2, size_t n);>
* ft_atoi
> 
> <int    ft_atoi(const char \*str);>
* ft_isalpha
> 
> <int    ft_isalpha(int c);>
* ft_isdigit
> 
> <int    ft_isdigit(int c);>
* ft_isalnum
> 
> <int    ft_isalnum(int c);>
* ft_isascii
> 
> <int    ft_isascii(int c);>
* ft_isprint
> 
> <int    ft_isprint(int c);>
* ft_toupper
> 
> <int    ft_toupper(int c);>
* ft_tolower
> 
> <int    ft_tolower(int c);>
