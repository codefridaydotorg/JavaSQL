# VIM Tutorials

## Basic File Commands

Goto command mode with :
:q	Closes a file(unmodified file).
:q!	Closes a file and discards changes.
:wq	Save changes and close file.
:w	To Save the changes.
:!<cmd>	To Run the shell command from the Editor itself (TIP: Make sure to save the changes first).


## Open a File

Use vim <filename.extension> to open/create the file.
Press
i	To enter insert mode, cursor at the begining of cursor position.
a	To enter insert mode, cursor at the end of cursor position.
I	To enter insert mode, cursor at the begining of the line the cursor is at.
A	To enter insert mode, cursor at the end of the line the cursor is at.
:	To enter command mode.
v	To enter visual mode.
x   To delete the character the cursor is currently at(works in command mode).
r   To replace the character the cursor is currently at(works in command mode).
v   To start select mode, use the navigation keys to select the text.
y   To yank/copy the text.
p   To paste selected text.
ESC	To enter normal mode.

## General Commands

Move around the file with key H J K L or the arrow keys.
Hit x to delete a character.
Hit d two times to delete the entire line.
Hit u to undo any changes.
Use CTRL+R to redo any changes.

## Cut, Copy & Paste

### To Copy

yy	To copy the current line, including the newline character.
3yy	To copy 3 lines from where the cursor is present.
y$	To copy everything from the current cursor poition to the end of line.
y^	To copy everything from the current cursor poition to the start of line.
yw	To copy from current cursor position to the start of the next word.
yiw	To copy the current word.

### To Cut

dd	To cut the current line, including newline character.
3dd	To cut the 3 lines from the current cursor position.
d$	To cut everything from the current cursor position to the end of file.

## To Paste

+p	To paste from the system clipboard.
p	To paste from the vim file itself.
