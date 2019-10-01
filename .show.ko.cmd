cmd_/home/student/show.ko := ld -r -m elf_i386 -T ./scripts/module-common.lds --build-id  -o /home/student/show.ko /home/student/show.o /home/student/show.mod.o
