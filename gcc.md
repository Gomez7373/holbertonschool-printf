gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -c _printf.c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -c c_printf.c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -c u_printf.c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -c o_printf.c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -c x_printf.c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -c X_printf.c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -c p_printf.c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -c r_printf.c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -c main.c


then 

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -o my_printf_executable main.o _printf.o c_printf.o u_printf.o o_printf.o x_printf.o X_printf.o p_printf.o r_printf.o

