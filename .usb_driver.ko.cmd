cmd_/home/student/usb_driver.ko := ld -r -m elf_i386 -T ./scripts/module-common.lds --build-id  -o /home/student/usb_driver.ko /home/student/usb_driver.o /home/student/usb_driver.mod.o
