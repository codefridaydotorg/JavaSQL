# Advanced Vim

## Basic Setup
set nocompatible	To make vim non-compatible with vi
syntax enable		To enable syntax
filetype plugin on	To enable plugins

## Finding Files
"Search down into subfolders"
"Provide tab-completion for all file-related tasks"

set path+=**
"To set path to search in all all file directories and all sub-directories"

set wildmenu		To display all the matching files when we use tab-complete

find <filename>.<extension>
"To search for the file"

DISCLAIMER: You can use wild-cards like * in search. The function further supports tabs feature too.

:b			Lets us autocomplete any open buffer. 

## Swap Files
Swap files are used a backups incase the Vim crashes or the system closes un-expectedly, they might create a clutter but it is always better to keep them as a backup even if using a Version Control System.

You however can use the following commands.

vim -r <filename>	Recovers the last backup for a system crash.
set nobackup		Disables the backing up of files.
set nowritebackup	Disables the backing up process while editting the file.
set noswapfiles		No swap files

set swapfile
set dir=<dir path>	Set directory where swap files are saved.

set backup		To Enable Backup
set backupdir=<dir>	To enable backup directory
set writebackup		To enable backup during development.

:help swap-file		To see swap files documentation.
