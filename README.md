# Libft
Grade achieved: 125% ✅

## ℹ️Description
- My first ever project at 42.
- A C (thin) library with a collection of basic functions that supports other projects coded in C.
- This project is constantly evolving, as I keep improving old code, and add functions as I need them.

## 🛠️ Usage

### As an Included Library in a Makefile:
```Makefile
# In your Makefile
LIBFT := <path_to_libft>/libft.a

$(NAME): $(OBJECT_FILES) $(LIBFT)
		$(CC) $(CFLAGS) $^ -o $(NAME)

$(LIBFT):
	@make -C <path_to_libft>
```
```C
//In your C file:
#include "libft.h"
```

## 👥 Author
Matilda Tice (Github: mstice, 42: mtice)  
<sub>Cover image by [Ayogun](https://github.com/ayogun/42-project-badges)</sub>
