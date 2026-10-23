# xv6-my-os - Custom OS by Aqsa Asif Khan Niazi

## OS Module Architecture - 10 Modules Integrated

```mermaid
flowchart TD
    A[Module 1: Custom Banner] --> B[Module 2: proccount working]
    B --> C[Module 3: hello getppid proccount]
    C --> D[Module 4: meminfo Physical Memory]
    D --> E[Module 5: diskinfo OS Final]
    E --> F[Module 6: rdcycle RISC-V cycle]
    F --> G[Module 7: rdinstret instruction counter]
    G --> H[Module 8: CUSTOM rdtime time CSR]
    H --> I[Module 9: SATP Reader Sv39]
    I --> J[Module 10: Stack Inspector]
    J --> K[FINAL: All 10 Integrated final.c]
