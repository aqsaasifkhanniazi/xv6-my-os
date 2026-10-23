# xv6-my-os - Custom OS by Aqsa Asif Khan Niazi

## OS Module Architecture - 10 Modules Integrated

```mermaid
flowchart TD
    A[Module 1: Custom Banner] --> B[Module 2: proccount]
    B --> C[Module 3: hello getppid proccount]
    C --> D[Module 4: meminfo]
    D --> E[Module 5: diskinfo]
    E --> F[Module 6: rdcycle]
    F --> G[Module 7: rdinstret]
    G --> H[Module 8: CUSTOM rdtime]
    H --> I[Module 9: SATP Reader]
    I --> J[Module 10: Stack Inspector]
    J --> K[FINAL: All 10 Integrated final.c]


## Part A: OS Modules

*Module 1: Custom Banner*
Customized xv6-riscv kernel banner at boot.
Displays custom OS identity on startup.

*Module 2: proccount*
Syscall to count active processes.
Reads proc.c to return total running processes.

*Module 3: hello, getppid, proccount*
Three basic syscalls verified together.
Includes greeting, parent PID and process count.

*Module 4: meminfo*
Physical memory monitor syscall.
Reports free and used physical memory.

*Module 5: diskinfo*
Disk information syscall - OS final.
Provides disk usage and storage details.

## Part B: Architecture Modules

*Module 6: rdcycle*
RISC-V cycle reader using cycle CSR.
Measures CPU cycles for performance.

*Module 7: rdinstret*
RISC-V instruction counter using instret CSR.
Counts total instructions executed.

*Module 8: CUSTOM rdtime*
Custom implementation using time CSR.
Unique, not using sstatus/sepc/stvec.

*Module 9: SATP Reader*
SATP and memory layout reader for Sv39.
No trap, shows virtual memory layout.

*Module 10: Stack Inspector*
RISC-V stack and trap inspector.
Reads sscratch, sp, fp, ra registers.
