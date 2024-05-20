# Libft

## Description
This is the first project of a c learning journey.

## Assignment
### Libft - Your very first own library
This project is about coding a C library.
It will contain a lot of general purpose functions your programs will rely upon.

The goal is to re-write some lib-c functions from scratch and build your very own library.

This is a 42 São Paulo School assignment found on the internet (I'm not a student there).

Based on [this](https://github.com/rphlr/42-Subjects?tab=readme-ov-file) repository.

## How to use
Clone the source code, enter libft folder and compile:
```shell
$ git clone https://github.com/gabriGutiz/c-learning.git
$ cd libft
$ make
```

Include library:
```c
#include "libft.h"
```

Clean compilation (.o files):
```shell
$ make clean
```

# Library functions
* Every function have the name of the lib-c function with the suffix *ft_*.
* Additional and Bonus aren't from lib-c but will be used in the next assignment.
* Bonus part refers to linked list manipulation

| Mandatory  | Additional    | Bonus           |
|------------|---------------|-----------------|
| ft_isalpha | ft_substr     | ft_lstnew       |
| ft_isdigit | ft_strjoin    | ft_lstadd_front |
| ft_isalnum | ft_strtrim    | ft_lstsize      |
| ft_isascii | ft_split      | ft_lstlast      |
| ft_isprint | ft_itoa       | ft_lstadd_back  |
| ft_strlen  | ft_strmapi    | ft_lstdelone    |
| ft_memset  | ft_striteri   | ft_lstclear     |
| ft_bzero   | ft_putchar_fd | ft_lstiter      |
| ft_memcpy  | ft_putstr_fd  | ft_lstmap       |
| ft_memmove | ft_putendl_fd |                 |
| ft_strlcpy | ft_putnbr_fd  |                 |
| ft_strlcat |               |                 |
| ft_toupper |               |                 |
| ft_tolower |               |                 |
| ft_strchr  |               |                 |
| ft_strrchr |               |                 |
| ft_strncmp |               |                 |
| ft_memchr  |               |                 |
| ft_memcmp  |               |                 |
| ft_strnstr |               |                 |
| ft_atoi    |               |                 |
| ft_calloc  |               |                 |
| ft_strdup  |               |                 |

