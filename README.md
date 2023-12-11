# Minitalk_42

## Summary

The Minitalk project involves creating a small data exchange program using UNIX signals. the project has specific instructions and requirements outlined for both the mandatory and bonus parts. The primary goal is to implement a communication system between a client and a server using only UNIX signals (SIGUSR1 and SIGUSR2). The server must be able to handle multiple clients consecutively without restarting, and the communication should occur through the exchange of strings. The bonus part introduces additional features such as server acknowledgment for received messages and support for Unicode characters. Strict adherence to the Norm, proper error handling, and memory management are emphasized throughout the project. The README provides detailed chapters covering foreword, common instructions, project instructions, mandatory and bonus parts.

## Table of Contents

I. [Common Instructions](#chapter-i-common-instructions)  
II. [Project Instructions](#chapter-ii-project-instructions)  
III. [Mandatory Part](#chapter-iii-mandatory-part)  
IV. [Bonus Part](#chapter-iv-bonus-part)  

## Chapter I: Common Instructions

- Your project must be written in C.
- Your project must be written in accordance with the Norm.
- Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc).
- All heap allocated memory space must be properly freed.
- Include a Makefile for compilation.
- Create test programs for your project.

## Chapter II: Project Instructions

- Name your executable files client and server.
- Turn in a Makefile that does not relink.
- You can use your libft.
- Thoroughly handle errors.
- No memory leaks allowed.
- You can have one global variable per program.

## Chapter III: Mandatory Part

You must create a communication program in the form of a client and a server.

- The server must be started first and print its PID.
- The client takes two parameters: The server PID and the string to send.
- The client must send the string to the server.
- The server must display the received string quickly.
- The server should handle multiple clients in a row without needing to restart.
- Communication between client and server must be done only using UNIX signals (SIGUSR1 and SIGUSR2).

## Chapter IV: Bonus Part

- The server acknowledges every message received by sending back a signal to the client.
- Unicode characters support.



