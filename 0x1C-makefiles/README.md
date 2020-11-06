
<img src="https://user-images.githubusercontent.com/66263776/98416555-43fa9b80-204d-11eb-800a-df8e19b62655.jpg" width="700" height= "200"> 
# 0x1C. C - Makefiles 

Makefile is a file that it contain information that it permit to  make build automation tool to generate a target/goal.
## :book: Information :book:
In this section you are going to find some information about what is makefile and How you can use this
* [What is a Makefile and how does it work?](https://opensource.com/article/18/8/what-how-makefile "makefile")
* [Makefile](https://www.tutorialspoint.com/makefile/index.htm "Makefile")



## :memo:  Description about the activities :memo:
In this repository we are going to do some exercise to know What is Makefile. In the follow paragraph you are going to find the question that in this repository have the answer.
### :interrobang: Question :thinking:
1) Create your first Makefile.
    ```
    user@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
    gcc main.c holberton.c -o holberton
    user@ubuntu:~/0x1C. Makefiles$ ./holberton 
    j#0000000000000000000000000000000000000
    j#000000000000000000@Q**g00000000000000
    j#0000000000000000*]++]4000000000000000
    j#000000000000000k]++]++*N#000000000000
    j#0000000000000*C+++]++]++]J*0000000000
    j#00000000000@+]++qwwwp=]++++]*00000000
    j#0000000000*+++]q#0000k+]+]++]4#000000
    j#00000000*C+]+]w#0000*]+++]+]++0000000
    j#0000we+]wW000***C++]++]+]++++40000000
    j#000000000*C+]+]]+]++]++]++]+q#0000000
    j#0000000*]+]+++++++]++]+++]+++J0000000
    j#000000C++]=]+]+]+]++]++]+]+]+]=000000
    j#00000k+]++]+++]+]++qwW0000000AgW00000
    j#00000k++]++]+]+++qW#00000000000000000
    j#00000A]++]++]++]++J**0000000000000000
    j#000000e]++]+++]++]++]J000000000000000
    j#0000000A]++]+]++]++]++000000000000000
    j#000000000w]++]+]++]+qW#00000000000000
    j#00000000000w]++++]*0##000000000000000
    j#0000000000000Ag]+]++*0000000000000000
    j#00000000000000000we]+]Q00000000000000
    j#0000000000000@@+wgdA]+J00000000000000
    j#0000000000000k?qwgdC=]4#0000000000000
    j#00000000000000w]+]++qw#00000000000000
    "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    user@ubuntu:~/0x1C. Makefiles$ 
    ```
2) Do this:
    ```
	user@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
    gcc main.c holberton.c -o holberton
    user@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
    gcc main.c holberton.c -o holberton
    user@ubuntu:~/0x1C. Makefiles$
	```
3) Makefile with other Requirement
    ```
	user@ubuntu:~/holberton/curriculum_by_julien/holbertonschool-low_level_programming/0x1C. Makefiles$ ls -1
    0-Makefile
    1-Makefile
    2-Makefile
    3-Makefile
    holberton.c
    main.c
    main.c~
    m.h
    user@ubuntu:~/0x1C. Makefiles$ make -f 3-Makefile
    gcc    -c -o main.o main.c
    gcc    -c -o holberton.o holberton.c
    gcc main.o holberton.o -o holberton
    user@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
    gcc main.o holberton.o -o holberton
    user@ubuntu:~/0x1C. Makefiles$ ls -1
    0-Makefile
    1-Makefile
    2-Makefile
    3-Makefile
    holberton
    holberton.c
    holberton.o
    main.c
    main.c~
    main.o
    m.h
    user@ubuntu:~/0x1C. Makefiles$ make clean -f 3-Makefile 
    rm -f *~ holberton
    user@ubuntu:~/0x1C. Makefiles$ make oclean -f 3-Makefile 
    rm -f main.o holberton.o
    user@ubuntu:~/0x1C. Makefiles$ make fclean -f 3-Makefile 
    rm -f *~ holberton
    rm -f main.o holberton.o
    user@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
    gcc    -c -o main.o main.c
    gcc    -c -o holberton.o holberton.c
    gcc main.o holberton.o -o holberton
    user@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
    gcc main.o holberton.o -o holberton
    user@ubuntu:~/0x1C. Makefiles$ make re -f 3-Makefile
    rm -f main.o holberton.o
    gcc    -c -o main.o main.c
    gcc    -c -o holberton.o holberton.c
    gcc main.o holberton.o -o holberton
    user@ubuntu:~/0x1C. Makefiles$ 
	```
