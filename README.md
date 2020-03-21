# libft

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/d1bd308375ce46a1a7c8698a9c3e754b)](https://app.codacy.com/manual/juanlamarao/42_libft?utm_source=github.com&utm_medium=referral&utm_content=juanlamarao/42_libft&utm_campaign=Badge_Grade_Dashboard)
[![License](http://img.shields.io/:license-mit-blue.svg?style=flat-square)](http://badges.mit-license.org)

Remake of classic functions of libC, stdlib, new functions +linked list operations

### SCORE ON 42CURSUS:
PART 1 - 100%, PART 2 - 100%, BONUS PART - Seg fault

## Compilation
1. `git clone <https://github.com/juanlamarao/42_libft`
2. `cd 42_libft`
3. `make`

## How to test
1. Compile libft.a
2. Include in your project the libft.h file
3. Compile your project with `-L. ft` flag

## Functions List
### 1st part
* ft_memset
> Set _len_ bytes of _b_ with char content of _c_.  
> void   \*ft_memset(void \*b, int c, size_t len);
* ft_bzero
> Set _len_ bytes of _s_ with '\0'.  
> void   ft_bzero(void \*s, size_t n);
* ft_memcpy
> Copies _n_ bytes from memory area _src_ to memory area _dest_.  
> void   \*ft_memcpy(void \*dst, const void \*src, size_t n);
* ft_memccpy
> Copies no more than _n_ bytes from memory area _src_ to memory area 
> _dest_, stopping when the character c is found.  
> void   \*ft_memccpy(void \*dst, const void \*src, int c, size_t n);
* ft_memmove
> Copies _n_ bytes from memory area _src_ to memory area _dest_.  
> void   \*ft_memmove(void \*dst, const void \*src, size_t n);
* ft_memchr
> Scans the  initial _n_ bytes of the memory area pointed to by _s_ for the first instance of _c_.  
> void   \*ft_memchr(const void \*s, int c, size_t n);
* ft_memcmp
> Compares the first _n_ bytes (each interpreted as unsigned char) of the memory areas _dst_ and _src_.  
> void   \*ft_memcpy(void \*dst, const void \*src, size_t n);
* ft_strlen
> Calculates the length of the string pointed to by _s_, excluding the terminating null byte '\0'.  
> int    ft_strlen(const char \*s);
* ft_strdup
> Returns a pointer to a new string which is a duplicate of the string _s_.  
> char   \*ft_strdup(const char \*s);
* ft_calloc
> Allocates memory for an array of nmemb elements of size bytes each and
> returns a pointer to the allocated memory. The memory  is  set  to zero.  
> void   \*ft_calloc(size_t nmemb, size_t size);
* ft_strlcat
> Appends the NUL-terminated string src to the end of dst.  It will append
> at most size - strlen(dst) - 1 bytes, NUL-terminating the result.  
> size_t  ft_strlcat(char \*dst, const char \*src, size_t destsize);
* ft_strchr
> Returns a pointer to the first occurrence of the character c in the string s.
> char   \*ft_strchr(const char \*s, int c);
* ft_strrchr
> Returns a pointer to the last occurrence of  the character c in the string s.
> char   \*ft_strrchr(const char \*s, int c);
* ft_strnstr
> Locates the first occurrence of the null-terminated string little in the string
> big, where not more than len characters are searched.
> char   \*ft_strnstr(const char \*s1, const char \*s2, size_t len);
* ft_strncmp
> Compares the two strings s1 and s2 and return the difference between chars.
> int    ft_strncmp(const char \*s1, const char \*s2, size_t n);
* ft_atoi
> Converts the initial portion of the string pointed to by nptr to int.
> int    ft_atoi(const char \*str);
* ft_isalpha
> 
> int    ft_isalpha(int c);
* ft_isdigit
> 
> int    ft_isdigit(int c);
* ft_isalnum
> 
> int    ft_isalnum(int c);
* ft_isascii
> 
> int    ft_isascii(int c);
* ft_isprint
> 
> int    ft_isprint(int c);
* ft_toupper
> 
> int    ft_toupper(int c);
* ft_tolower
> 
> int    ft_tolower(int c);

### 2nd part
* ft_substr
>
> char			\*ft_substr(char const \*s, unsigned int start, size_t len);
* ft_strjoin
>
> char			\*ft_strjoin(char const \*s1, char const \*s2);
* ft_strtrim
>
> char			\*ft_strtrim(char const \*s1, char const \*set);
* ft_split
>
> char			\*\*ft_split(char const \*s, char c);
* ft_itoa
>
> char			\*ft_itoa(int n);
* ft_strmapi
>
> char			\*ft_strmapi(char const \*s, char (\*f)(unsigned int, char));
* ft_putchar_fd
>
> void			ft_putchar_fd(char c, int fd);
* ft_putstr_fd
>
> void			ft_putstr_fd(char \*s, int fd);
* ft_putendl_fd
>
> void			ft_putendl_fd(char \*s, int fd);
* ft_putnbr_fd
>
> void			ft_putnbr_fd(int nbr, int fd);
