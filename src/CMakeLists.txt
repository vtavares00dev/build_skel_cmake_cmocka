INCLUDE_DIRECTORIES( . )



# build a todo app that uses the todo shared library
ADD_EXECUTABLE(To_Do_List main.c todo.c)
