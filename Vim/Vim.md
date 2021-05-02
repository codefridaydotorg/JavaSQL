# VIM Tutorials

## Basic File Commands

Goto command mode with :<br/>
:q	Closes a file(unmodified file).<br/>
:q!	Closes a file and discards changes.<br/>
:wq	Save changes and close file.<br/>
:w	To Save the changes.<br/>
:!<cmd>	To Run the shell command from the Editor itself (TIP: Make sure to save the changes first).<br/>
<br/>

## Open a File
<br/>
Use vim <filename.extension> to open/create the file.<br/>
Press<br/>
i	To enter insert mode, cursor at the begining of cursor position.<br/>
a	To enter insert mode, cursor at the end of cursor position.<br/>
I	To enter insert mode, cursor at the begining of the line the cursor is at.<br/>
A	To enter insert mode, cursor at the end of the line the cursor is at.<br/>
:	To enter command mode.<br/>
v	To enter visual mode.<br/>
x   To delete the character the cursor is currently at(works in command mode).<br/>
r   To replace the character the cursor is currently at(works in command mode).<br/>
v   To start select mode, use the navigation keys to select the text.<br/>
y   To yank/copy the text.<br/>
p   To paste selected text.<br/>
ESC	To enter normal mode.<br/>

## General Commands
<br/>
Move around the file with key H J K L or the arrow keys.<br/>
Hit x to delete a character.<br/>
Hit d two times to delete the entire line.<br/>
Hit u to undo any changes.<br/>
Use CTRL+R to redo any changes.

## Cut, Copy & Paste

### To Copy
<br/>
yy	To copy the current line, including the newline character.<br/>
3yy	To copy 3 lines from where the cursor is present.<br/>
y$	To copy everything from the current cursor poition to the end of line.<br/>
y^	To copy everything from the current cursor poition to the start of line.<br/>
yw	To copy from current cursor position to the start of the next word.<br/>
yiw	To copy the current word.<br/>

### To Cut
<br/>
dd	To cut the current line, including newline character.<br/>
3dd	To cut the 3 lines from the current cursor position.<br/>
d$	To cut everything from the current cursor position to the end of file.<br/>

## To Paste
<br/>
+p	To paste from the system clipboard.<br/>
p	To paste from the vim file itself.<br/>
