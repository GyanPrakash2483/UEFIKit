CC := clang
LD := lld

CFLAGS := -ffreestanding -target x86_64-unknown-windows -mno-red-zone -MMD -std=c23 -Wall -Wextra -I include
LDFLAGS := -flavor link -subsystem:efi_application -entry:efi_main

SRCS := test/main.c

default: all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

main.efi: test/main.o
	$(LD) $(LDFLAGS) $< -out:$@

-include $(SRCS:.c=.d)

.PHONY: clean all default

all: main.efi