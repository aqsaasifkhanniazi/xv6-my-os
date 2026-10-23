# Customized xv6-riscv Kernel

This project contains 10 modules: 5 Operating System modules and 5 Computer Architecture modules.

## Module Architecture Diagram

![Module Architecture](diagram.png)

## Project Overview

This project extends the MIT xv6-riscv teaching operating system with 10 educational modules. The modules are integrated into the Core xv6 Kernel.

### Part A: OS Modules (5 Modules)

**Module 1: Custom Banner** - Custom kernel banner showing OS name and student info at boot. Implemented in main.c.

**Module 2: proccount** - Counts active processes from process table. Returns total process count.

**Module 3: hello, getppid, proccount** - Three syscalls combined. Greeting, parent PID, and process count.

**Module 4: meminfo** - Shows total, free and used physical memory. Reads from kalloc.c.

**Module 5: diskinfo** - Shows disk size and free blocks. Final OS module for storage info.

### Part B: Architecture Modules (5 Modules)

**Module 6: rdcycle** - Reads RISC-V cycle CSR for performance measurement. Uses assembly.

**Module 7: rdinstret** - Reads instruction counter CSR. For CPI analysis.

**Module 8: CUSTOM rdtime** - Custom time CSR implementation. Unique logic, not standard CSRs.

**Module 9: SATP Reader** - Reads SATP for Sv39 paging. Shows virtual memory layout.

**Module 10: Stack Inspector** - Inspects stack registers sp, fp, ra. Shows trap frame.

**Branch: riscv | File: final.c | All 10 Modules Integrated**
```
