First time using C at the BSB server. Trying things out.

List of Questions I had using this server:
1. Commands like sudo shutdown now, or any "sudo" command sounds pretty destructive, as sudo is basically assuming full control (from what I know). Are commands like that still viable and okay?
2. Using this server to create my own C files like the one I just created probably takes up space. Does it take up space for EVERYONE using BSB? (Im assuming that's true actually) If so, can there be an incident where everyone runs out of space? If my own computer runs recursion with a 100 stacks, and apparently everyone wanted to try that on BSB, it will probably run out of RAM or any type of memory. What would happen? Would we get an error message? Would the server bust?
3. What are some of the general guidelines to using such private sub200 people server? Any super scary things we should worry about?

Using gdb debugger: 

"gdb ./"program-executable-name" "

Will automatically compile the program and run the debugger, going into the gdb interface.

Commands:

b : sets a breakpoint

r : runs a program

n : execute the next line (from breakpoint) This steps OVER

s : execute the next line (from breakpoint) This steps IN

c : Resume the program execution until the next breakpoint

print : display a variable

list : display source code around the current line

quit : get out

above commands must follow a name of the program or the line number.
