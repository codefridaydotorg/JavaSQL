# Advanced Vim

## Basic Setup
set nocompatible	To make vim non-compatible with vi<br/>
syntax enable		To enable syntax<br/>
filetype plugin on	To enable plugins<br/>

## Finding Files
"Search down into subfolders"<br/>
"Provide tab-completion for all file-related tasks"<br/>
<br/>
set path+=**<br/>
"To set path to search in all all file directories and all sub-directories"<br/>
<br/>
set wildmenu		To display all the matching files when we use tab-complete<br/>
<br/>
find <filename>.<extension><br/>
"To search for the file"<br/>
<br/>
DISCLAIMER: You can use wild-cards like * in search. The function further supports tabs feature too.<br/>
<br/>
:b			Lets us autocomplete any open buffer. <br/>

## Swap Files
Swap files are used a backups incase the Vim crashes or the system closes un-expectedly, they might create a clutter but it is always better to keep them as a backup even if using a Version Control System.<br/>
<br/>
You however can use the following commands.<br/>
<br/>
vim -r <filename>	Recovers the last backup for a system crash.<br/>
set nobackup		Disables the backing up of files.<br/>
set nowritebackup	Disables the backing up process while editting the file.
set noswapfiles		No swap files<br/>
<br/>
set swapfile<br/>
set dir=<dir path>	Set directory where swap files are saved.<br/>
<br/>
set backup		To Enable Backup<br/>
set backupdir=<dir>	To enable backup directory<br/>
set writebackup		To enable backup during development.<br/>
<br/>
:help swap-file		To see swap files documentation.<br/>
