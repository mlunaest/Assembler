# Assembler
Here is my assembler and disassembler!

It may take a .bin file, a .asm file, a .bin file, or a .txt file as input.

If assembling, it will take the .asm file and produce an assembled .bit file with
the same name as the original file. Ex, if I'm assembling "testing.asm", the resulting
file will be called "testing.bin".

If disassembling, it may take a .bin, or .coe file. If the input is a .bin file, 
the result will only be a .asm. For example, if I run "testing.bin", the resulting file
will be be "testing-assembled.asm". If I run a .coe file, it will produce both "testing.bin"
and "testing-assembled.asm". It is assumed that .coe files all are using a radix of 16.

Please input full file name, including extension, when running the program.

This program assumes correct syntax. Improper syntax will not throw exceptions,
and will produce erranous results. It also assumes the basic MIPS syntax of a space
after the opcode, and a space and comma between any adjacent registers. Futhermore,
it is assumed that comments are placed AT LEAST one space from the end of the actual
command. It also assumes that each instruction in the .asm files ends with a semicolon(;).
Furthermore all hexadecimal numbers must be proceeded with 0x.

the registers supported are as the conventions in MIPS, (ie, $t0, $zero, etc) but
they may also be referred to as $r0 - $r31. It is also assumed that the base address is 0, and does not support the saving of
.data components and the like. 

