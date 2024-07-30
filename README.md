# **Read Me**
These is some simple socket programs,  
I will be adding as a learn more.  
using Beej's Guide to Network Programming as a guide 
https://beej.us/guide/bgnet/

## Instructions
### ip4info instructions
to run each progam you can use gcc or clang

`clang ip4info.c -o ip4info`  
`gcc ip4info.c -o ip4info`  

if running on linux or another unix like operating system the `-lnsl` may be needed

### showip instructions  
to run this program  
`clang showip.c -o showip`  
`./showip example.com`  
and the program should return the list of ip addresses associated with the argument

### TCP instructions  
it is important that the server is ran first  
`clang server.c -o server`  
`./server`  
to run the client do the following on the client computer  
`clang client.c -o client`  
`./client hostname`

### UDP instructions  
it is important that the listener is ran first  
`clang listener.c -o listener`  
`./listener`  
to run the talker do the following on the client computer  
`clang talker.c -o talker`  
`./talker hostname message`