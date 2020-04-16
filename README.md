# 16032020-libft
*Summary:*

*The aim of this project is to code a C library regrouping usual functions that you’ll be allowed to use
in all your other projects.*

## Function in the mandatory part 1:

• memset • bzero • memcpy • memccpy • memmove • memchr • memcmp • strlen • strdup • strcpy • strncpy • strcat • strncat • strlcat • strchr • strrchr • strstr • strnstr • strcmp • strncmp • atoi
• isalpha • isdigit • isalnum • isascii • isprint • toupper • tolower

## Function in the mandatory part 2:
### **1. ft_memalloc** ###
   - *void * ft_memalloc(size_t size);*
     - Allocates (with malloc(3)) and returns a “fresh” memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.
### **2. ft_memdel** ###
   - *void ft_memdel(void **ap);*
     - Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.
### **3. ft_strnew** ###
   - *char * ft_strnew(size_t size);*
     - Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’. Each character of the string is initialized at ’\0’. If the allocation fails the function returns NULL.
### **4. ft_strdel** ###
   - *void ft_strdel(char **as);*
     - Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL.
### **5. ft_strclr** ###
   - *char * void ft_strclr(char *s);*
     - Sets every character of the string to the value ’\0’.
### **6. ft_striter** ###
   - *void ft_striter(char *s, void (*f)(char *));*
     - Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.
### **7. ft_striteri** ###
   - *void ft_striteri(char *s, void (*f)(unsigned int, char *));*
     - Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.
### **8. ft_strmap** ###
   - *char * ft_strmap(char const *s, char (*f)(char));*
     - Applies the function f to each character of the string given as argument to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f.
### **9. ft_strmapi** ###
   - *char * ft_strmapi(char const *s, char (*f)(unsigned int, char));*
     - Applies the function f to each character of the string passed as argument by giving its index as first argument to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f.
### **10. ft_strequ** ###
  - *int ft_strequ(char const *s1, char const *s2);*
    - Lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.
### **11. ft_strnequ** ###
  - *int ft_strnequ(char const *s1, char const *s2, size_t n);*
    - Lexicographical comparison between s1 and s2 up to n char- acters or until a ’\0’ is reached. If the 2 strings are identical, the function returns 1, or 0 otherwise.
    
     
     
     
      
