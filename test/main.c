#include <uefi.h>

EFI_STATUS efi_main(EFI_HANDLE handle, EFI_SYSTEM_TABLE *system_table) {
    
    CHAR16 *msg = u"Hello, World!";
    
    EFI_STATUS status;

    status = system_table->ConOut->ClearScreen(system_table->ConOut);
    if(status) {
        return status;
    }

    status = system_table->ConOut->OutputString(system_table->ConOut, msg);
    if(status) {
        return status;
    }

    while(true) {

    }

    return 0;

}