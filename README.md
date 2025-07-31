# 42_Libft
libft - The First C Library at 42

Welcome to the libft repository! This project marks my first deep dive into C programming and is a fundamental step in the 42 School curriculum. Here, you'll find a collection of re-implemented C functions, along with some custom utility functions, all built from scratch, without the use of standard libraries beyond a few allowed ones.

## What is 42 School?

42 School is a global network of innovative programming schools, focused on a practical and collaborative learning model, with no teachers or tuition fees. The methodology is based on projects and peer-to-peer learning, encouraging autonomy, problem-solving, and the development of a strong community of programmers.

## The Piscine: The Initial Challenge

Before being officially accepted into 42, candidates undergo an intensive and immersive four-week period known as "The Piscine." It's a test of endurance, logic, and learning ability, where prospective students are bombarded with programming concepts, daily challenges, and projects. It's a period of intense dedication and accelerated learning, where collaboration is as important as individual capability. libft is the first major project after being approved and officially entering the school.

## Purpose of libft

The main goal of the libft project is to familiarize students with the C language, memory manipulation, pointers, and the creation of a library. By re-implementing functions from libc (the standard C library) and creating our own utilities, we develop a deeper understanding of how these functions work internally. This project serves as a base for all future projects at 42, as the functions created here can (and should) be reused.

## Features

libft is divided into three main categories of functions:

Re-implemented libc functions:

* String manipulation (**ft_strlen**, **ft_strlcpy**, **ft_strlcat**, **ft_strncmp**, **ft_strchr**, **ft_strrchr**, **ft_strnstr**, **ft_substr**)

* Memory manipulation (**ft_memset**, **ft_memcpy**, **ft_memchr**, **ft_memcmp**, **ft_memmove**)

* Character checking (**ft_isalpha**, **ft_isdigit**, **ft_isalnum**, **ft_isascii**, **ft_isprint**, **ft_toupper**, **ft_tolower**)

* Conversion (**ft_atoi**, **ft_itoa**)

Among others.

Additional functions:

String manipulation functions with allocation (**ft_substr**, **ft_strjoin**, **ft_strtrim**, **ft_split**, **ft_strmapi**)

Functions for writing to file descriptors (**ft_putchar_fd**, **ft_putstr_fd**, **ft_putendl_fd**, **ft_putnbr_fd**)

Linked list functions (bonus):

Creation and manipulation of list elements (**ft_lstnew**, **ft_lstadd_front**, **ft_lstadd_back**, **ft_lstdelone**, **ft_lstclear**, **ft_lstiter**, **ft_lstmap**)

Counting elements (**ft_lstsize**)

Accessing the last element (**ft_lstlast**)

How to Use

To use libft in your projects, follow these steps:

1. Clone the repository:

        git clone https://github.com/SEU_USUARIO/libft.git
        cd libft

3. Compile the library (one of these commands below)

        make
        make bonus

This will create the file libft.a in the project root.

3. Include the library in your project:

To compile your program (your_program.c) that uses libft functions, you will need to:\

* Include the header libft.h in your .c files.

* Link with the libft.a library during compilation.

Example compilation with gcc:

        gcc -static your_program.c libft.a -o program_name
